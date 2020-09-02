project(classess1)
include_directories(inc)
add_executable(classes1 entrypoint.cpp src/MyAbstractClass.cpp src/MyConcreteClass1.cpp src/MySuccessorClass1.cpp)