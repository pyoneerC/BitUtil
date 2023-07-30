cmake_minimum_required(VERSION 3.25)
project(bitslibrary)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)

# Add the library source files
add_library(bitslibrary
        BitUtil.cpp
        )

# Create an executable for testing
add_executable(bitslibrary_test
        BitUtil.cpp
        )

# Link the library to the test executable
target_link_libraries(bitslibrary_test PRIVATE bitslibrary)

# Add include directory for the library
target_include_directories(bitslibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Set test executable properties
set_target_properties(bitslibrary_test PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        )

# Set variables for installation paths
set(INSTALL_LIB_DIR lib CACHE PATH "Installation directory for libraries")
set(INSTALL_INCLUDE_DIR include CACHE PATH "Installation directory for headers")

# Install library and header files
install(TARGETS bitslibrary
        EXPORT bitslibraryConfig
        LIBRARY DESTINATION ${INSTALL_LIB_DIR}
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR}
        RUNTIME DESTINATION ${INSTALL_LIB_DIR}
        )
install(FILES BitUtil.h
        DESTINATION ${INSTALL_INCLUDE_DIR}/bitslibrary
        )
