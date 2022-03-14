# Libraries

This is just a template project for quick foundation of C++ projects. It could be useful if you prefer use a text editor and manual build files instead full service from IDE. 

There are templates for:
* Static library
* Shared library
* Header only library
* Integration point - driver for all libs

All subprojects could be build in release or debug configuration. Also they could be build as production taget or UT project based on GTest framework

# How to use that

Each directory has a build.sh script. Run it from containing directory with 1st param "debug" or "release" (by default), and 2nd param could be "test" for building UT and run them immediately

# The structure

Each project contains the next subfolder:
* bin - with final binay file
* src - for your cpp files
* include - for your header files
* test - for unittests
* lib - for other 3rd-party libraries

All building is going in build_$your compiler$_$build configuration$ directory