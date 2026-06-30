cmake_minimum_required(VERSION 4.2.0)
project(SchoolManagement)
add_executable(SchoolManagement src/main.cpp
		src/Users.cpp
		src/ClassRoom.cpp
		src/SchoolManagement.cpp
		src/Student.cpp
		src/Users.cpp
		)
target_include_directories(SchoolManagement PRIVATE include)


