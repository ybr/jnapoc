Project to examplify what and how we can do to integrate C/C++ and Java/Scala code.

We achieved the call of a C and C++ function which accepts arguments:
- first: a complex object (user with its address)
- second array of doubles
and return a nested object (result with its details)

The nice thing is that it can be done in simple way thanks to JNA. Furthermore JNA structure definitions can be used seamlessly with C structs or C++ classes.

Example code can be found in
- for C `hello.c`
- for C++ `poc.cpp`

Install SBT, then type
> sbt run

JNA definition in the project is hard coded on
> /home/ybr/gitlab/jna/libhello.so

To compile C code
> gcc -shared -o libhello.so -fPIC hello.c
To compile C++ code
> gcc -shared -o libpoc.so -fPIC poc.cpp

Next:
- performance issues
- function accepts array of users