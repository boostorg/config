
find_package(Threads)
set(THREADED_LIBS "${CMAKE_THREAD_LIBS_INIT}")
set(LIBS_TO_CHECK atomic rt)
foreach(lib ${LIBS_TO_CHECK})
    find_library(FIND_LIB${lib} ${lib})
    if(FIND_LIB${lib})
        set(THREADED_LIBS "${THREADED_LIBS} ${FIND_LIB${lib}}")
    endif()
endforeach()
string(STRIP "${THREADED_LIBS}" THREADED_LIBS)
message(STATUS "Threaded libs: ${THREADED_LIBS}")
include_directories(.)

macro(threaded_test)
    bcm_test(${ARGN})
    cmake_parse_arguments(PARSE "" "NAME" "" ${ARGN})
    target_link_libraries(${PARSE_NAME} ${THREADED_LIBS})
endmacro(threaded_test)

function(create_test BOOST_CONFIG_MACRO BOOST_CONFIG_FILE POSITIVE_TEST EXPECT_SUCCESS)
    string(TOLOWER ${BOOST_CONFIG_MACRO} BOOST_CONFIG_NS)
    if(${POSITIVE_TEST} EQUAL ${EXPECT_SUCCESS})
        set(BOOST_CONFIG_IFDEF "#ifdef")
    else()
        set(BOOST_CONFIG_IFDEF "#ifndef")
    endif()

    if(BOOST_CONFIG_MACRO MATCHES "BOOST_HAS_TR1.*")
        set(BOOST_CONFIG_TR1_INCLUDE "#include <boost/tr1/detail/config.hpp>")
    else()
        set(BOOST_CONFIG_TR1_INCLUDE "")
    endif()

    if(${EXPECT_SUCCESS})
        configure_file(pass.cpp ${BOOST_CONFIG_FILE}_pass.cpp)
        threaded_test(NAME ${BOOST_CONFIG_FILE}_pass SOURCES ${CMAKE_CURRENT_BINARY_DIR}/${BOOST_CONFIG_FILE}_pass.cpp)
    else()
        configure_file(fail.cpp ${BOOST_CONFIG_FILE}_fail.cpp)
        bcm_test(NAME ${BOOST_CONFIG_FILE}_fail SOURCES ${CMAKE_CURRENT_BINARY_DIR}/${BOOST_CONFIG_FILE}_fail.cpp COMPILE_ONLY WILL_FAIL)
        if(MSVC)
            target_compile_options(${BOOST_CONFIG_FILE}_fail PUBLIC /WX)
        else()
            target_compile_options(${BOOST_CONFIG_FILE}_fail PUBLIC -Werror -Wall)
        endif()
    endif()
endfunction()

function(parse_test SRC)
    if(SRC MATCHES "boost_has_tr1.*")
        # Skip tr1 tests for now
        return()
    endif()
    set(MACRO_REGEX "//[ ]*MACRO[ ]*:[ ]*([A-Za-z0-9_]+)")
    file(STRINGS ${SRC} SRC_MACRO_LINE REGEX ${MACRO_REGEX})
    string(REGEX REPLACE ${MACRO_REGEX} "\\1" BOOST_CONFIG_MACRO ${SRC_MACRO_LINE})
    get_filename_component(BOOST_CONFIG_FILE ${SRC} NAME_WE)

    if(SRC MATCHES "boost_no_")
        set(POSITIVE_TEST 0)
    else()
        set(POSITIVE_TEST 1)
    endif()

    create_test(${BOOST_CONFIG_MACRO} ${BOOST_CONFIG_FILE} ${POSITIVE_TEST} 1)
    create_test(${BOOST_CONFIG_MACRO} ${BOOST_CONFIG_FILE} ${POSITIVE_TEST} 0)

endfunction()

set(SKIP_TESTS 
    boost_has_macro_use_facet.ipp
    boost_no_com_value_init.ipp
    boost_no_cxx11_addressof.ipp
    boost_no_cxx11_hdr_atomic.ipp
    boost_no_cxx11_hdr_codecvt.ipp
    boost_no_cxx11_hdr_tuple.ipp
    boost_no_cxx11_std_align.ipp
    boost_no_cxx11_trailing_result_types.ipp
    boost_no_decltype_n3276.ipp
    boost_no_ded_typename.ipp
    boost_no_sfinae_expr.ipp
    boost_no_two_phase_lookup.ipp
)
file(GLOB TESTS *.ipp)
foreach(TEST ${TESTS})
    set(${TEST}_ENABLED On)
    foreach(SKIP_TEST ${SKIP_TESTS})
        if(TEST MATCHES ${SKIP_TEST})
            set(${TEST}_ENABLED Off)
            break()
        endif()
    endforeach()
    if(${TEST}_ENABLED)
        parse_test(${TEST})
    endif()
endforeach()

bcm_test(NAME config_test_c SOURCES config_test_c.c)
bcm_test(NAME config_info SOURCES config_info.cpp)
threaded_test(NAME config_test SOURCES config_test.cpp)

bcm_test(NAME config_test_no_rtti SOURCES config_test.cpp)
set_target_properties(config_test_no_rtti PROPERTIES CXX_RTTI Off)
bcm_test(NAME config_test_no_exceptions SOURCES config_test.cpp)
set_target_properties(config_test_no_exceptions PROPERTIES CXX_EXCEPTIONS Off)

bcm_test(NAME test_thread_fail1 SOURCES threads/test_thread_fail1.cpp COMPILE_ONLY WILL_FAIL)
bcm_test(NAME test_thread_fail2 SOURCES threads/test_thread_fail2.cpp COMPILE_ONLY WILL_FAIL)

bcm_test(NAME abi_test SOURCES abi/abi_test.cpp abi/main.cpp)
bcm_test(NAME limits_test SOURCES limits_test.cpp)
bcm_test(NAME math_info SOURCES math_info.cpp)

include(CheckCXXCompilerFlag)
set(IMPLICIT_FALLTHROUGH_FLAG "-std=c++11 -Wimplicit-fallthrough -Wall -Werror")
check_cxx_compiler_flag(${IMPLICIT_FALLTHROUGH_FLAG} HAS_IMPLICIT_FALLTHROUGH)
bcm_test(NAME boost_fallthrough_test SOURCES boost_fallthrough_test.cpp COMPILE_ONLY)
if(HAS_IMPLICIT_FALLTHROUGH)
    set_target_properties(boost_fallthrough_test PROPERTIES COMPILE_FLAGS ${IMPLICIT_FALLTHROUGH_FLAG})
endif(HAS_IMPLICIT_FALLTHROUGH)
bcm_test(NAME helper_macro_test SOURCES helper_macro_test.cpp COMPILE_ONLY)

bcm_test(NAME cstdint_include_test SOURCES cstdint_include_test.cpp COMPILE_ONLY)

