#
# Default CMakeLists.txt contents for a Boost library
#

# sources.cmake defines ${PROJECT_NAME}_SOURCES
include(cmake/sources.cmake)

if("${${PROJECT_NAME}_SOURCES}" STREQUAL "")

  # if no sources, this is a header-only library
  add_library(boost_${BOOST_PROJECT_NAME} INTERFACE)

  # include directory
  target_include_directories(${PROJECT_NAME} INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  )

else()

  # a library that requires building
  add_library(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})

  # include directory
  target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  )

endif()

# add namespaced alias
add_library(boost::${BOOST_PROJECT_NAME} ALIAS ${PROJECT_NAME})

# set imported target name to the unqualified name, it will be namespaced
set_property(TARGET ${PROJECT_NAME} PROPERTY EXPORT_NAME ${BOOST_PROJECT_NAME})

# link to dependencies
include(CMakeFindDependencyMacro)

function(boost_declare_dependency package type target)

  target_link_libraries(${PROJECT_NAME} ${type} ${target})

  if(${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})

    find_dependency(${package} ${PROJECT_VERSION} EXACT)

  endif()

endfunction()

include(cmake/dependencies.cmake)

# target installation
install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}-targets
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include
)

# header installation
install(DIRECTORY include/ DESTINATION include)

# export target info to ${PROJECT_NAME}-targets.cmake, used by -config.cmake
install(EXPORT ${PROJECT_NAME}-targets
  FILE ${PROJECT_NAME}-targets.cmake
  NAMESPACE boost::
  DESTINATION lib/cmake/${PROJECT_NAME}-${PROJECT_VERSION}
)

# install -dependencies.cmake, used by -config.cmake

install(FILES cmake/dependencies.cmake
  DESTINATION lib/cmake/${PROJECT_NAME}-${PROJECT_VERSION}
  RENAME ${PROJECT_NAME}-dependencies.cmake
)

# write ${PROJECT_NAME}-config.cmake
file(WRITE "${PROJECT_BINARY_DIR}/${PROJECT_NAME}-config.cmake" "
include(\${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}-targets.cmake)
include(CMakeFindDependencyMacro)
function(boost_declare_dependency package type target)
  find_dependency(\${package} ${PROJECT_VERSION} EXACT)
endfunction()
include(\${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}-dependencies.cmake)
")

include(CMakePackageConfigHelpers)

# write ${PROJECT_NAME}-config-version.cmake
write_basic_package_version_file("${PROJECT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake"
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY AnyNewerVersion
)

# install -config, -config-version
install(FILES
    "${PROJECT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
    "${PROJECT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake"
  DESTINATION lib/cmake/${PROJECT_NAME}-${PROJECT_VERSION}
)
