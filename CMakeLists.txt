cmake_minimum_required(VERSION 3.5)

include(cmake/BoostVersion.cmake)
set(BOOST_PROJECT_NAME config)

project(boost_${BOOST_PROJECT_NAME} VERSION ${BOOST_VERSION} LANGUAGES CXX)

include(cmake/default.cmake)
