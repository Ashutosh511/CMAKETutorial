cmake_minimum_required(VERSION 3.20)

# Make C++20 a hard requirement
set(CXX_STANDARD_REQUIRED ON)
# Default C++ standard for targets
set(CMAKE_CXX_STANDARD 20)

project(Hello 
        VERSION 0.0.1
        DESCRIPTION "cmake libraries"
        LANGUAGES CXX
)

# ADD LIBRARY
add_library(operations STATIC src//operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#target_compile_features(operations PUBLIC cxx_std_20)

# ADD LOGGER LIBS
add_library(logger STATIC logger/src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)
#target_compile_features(logger PUBLIC cxx_std_20)


# make executable file
add_executable(${PROJECT_NAME} main.cpp
                               src/dog.cpp
                               
)

# include binary target dependencies
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
target_link_libraries(${PROJECT_NAME} PUBLIC operations logger)