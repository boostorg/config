
include(BCMTest)
include(BCMProperties)

bcm_test_link_libraries(boost_config)

find_package(Threads)
add_library(config_threads INTERFACE)
target_link_libraries(config_threads INTERFACE "${CMAKE_THREAD_LIBS_INIT}")
set(LIBS_TO_CHECK atomic rt)
foreach(lib ${LIBS_TO_CHECK})
    find_library(FIND_LIB${lib} ${lib})
    if(FIND_LIB${lib})
        target_link_libraries(config_threads INTERFACE "${FIND_LIB${lib}}")
    endif()
endforeach()
string(STRIP "${THREADED_LIBS}" THREADED_LIBS)
message(STATUS "Threaded libs: ${THREADED_LIBS}")
include_directories(.)

include(TestGen.cmake)

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
    if(NOT "${TEST}" IN_LIST SKIP_TESTS)
        parse_test(${TEST})
    endif()
endforeach()

bcm_test(NAME config_test_c SOURCES config_test_c.c)
bcm_test(NAME config_info SOURCES config_info.cpp)

bcm_test(NAME config_test SOURCES config_test.cpp)
bcm_test(NAME config_test_no_rtti SOURCES config_test.cpp)
set_target_properties(config_test_no_rtti PROPERTIES CXX_RTTI Off)
bcm_test(NAME config_test_no_exceptions SOURCES config_test.cpp)
set_target_properties(config_test_no_exceptions PROPERTIES CXX_EXCEPTIONS Off)

foreach(CONFIG_TEST config_test config_test_no_rtti config_test_no_exceptions)
    target_link_libraries(${CONFIG_TEST} config_threads)
endforeach()

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
    target_compile_options(boost_fallthrough_test ${IMPLICIT_FALLTHROUGH_FLAG})
endif(HAS_IMPLICIT_FALLTHROUGH)
bcm_test(NAME helper_macro_test SOURCES helper_macro_test.cpp COMPILE_ONLY)

bcm_test(NAME cstdint_include_test SOURCES cstdint_include_test.cpp COMPILE_ONLY)


