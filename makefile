
C = gcc
CXX = clang++
CURRENT_DIR=~/cpp_demo/

SOURCE_C = ~/cpp_demo//basic_language/c_comp_cpp.c
OBJECTS_C =~/cpp_demo/c_comp_cpp.o

SOURCE_CXX = basic_language/c_comp_cpp.cpp

TARGET = hello_world
LDFLAGS_COMMON = -std=c++2a

all:
	$(C) -c $(SOURCE_C)
	$(CXX) $(SOURCE_CXX) $(OBJECTS_C) $(LDFLAGS_COMMON) -o $(TARGET)
clean:
	rm -rf *.o $(TARGET)
