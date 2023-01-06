# C++ Primer

### Purpose

This repo contains a simple app skeleton that provides an outline for learning some of the fundamental C++ language skills necessary for completing the LLVM labs in CS6340. The target audience are those comfortable with an object-oriented language like Java or Python but haven't worked with C++ before, or those who need a C++ refresher. Since C++ is a massive language, the idea behind this primer is to narrow the scope to language features used in our labs. 

This exercise is ungraded and entirely optional.

Please refrain from sharing solutions; this allows your classmates to arrive at a solution on their own. Feel free to share hints and resources, though.

### The todo list application

The app you'll build is a miniature todo list. You'll complete simple `User` and `Task` classes, create instances of these classes and manipulate pointers and C++'s standard template library containers to access and display the data in the classes.

A typical C++ application would include header files, but for simplicity's sake, this project is a single .cpp file with a `main` entry point. After finishing the project, you might wish to experiment with breaking the classes out into separate header files and using a [makefile](https://www.gnu.org/software/make/manual/make.html) or [CMake](https://cmake.org/) to build the project.

### Compiling and running the application

First, clone or download this repository. To compile, `cd` to the project directory containing the .cpp file and run

    clang++ -std=c++17 todoapp.cpp -o todoapp -Wall -Werror

Run your application with

    ./todoapp

Alternately, you can use any online tool like [repl.it](https://repl.it/languages/cpp11) to quickly create a workspace. The `-Wall` and `-Werror` flags help catch mistakes at compile time. You may wish to omit `-Werror` initially since the code starts out with unused variables. 

### Your tasks

Your tasks are inlined as comments inside `todoapp.cpp`. The tasks are ordered as sequential steps in increasing difficulty. It's expected that you'll consult documentation, Stack Overflow, etc to learn how to complete each task. Please compile and run the code as you finish each step before moving to the next task.

Useful debugging tools include [gdb](https://www.gnu.org/software/gdb/) and [valgrind](https://valgrind.org/).

### Notes on memory management

This exercise is contrived by imposing `new`/`delete` to allocate [heap memory](https://en.wikipedia.org/wiki/Memory_management). Modern C++ typically uses [smart pointers](https://en.wikipedia.org/wiki/Smart_pointer) rather than raw pointers. Smart pointers offer automatic memory management which helps avoid dangling references and memory leaks, among other benefits. Experience with manual memory allocation using `new`/`delete` is a prerequisite to understanding and motivating smart pointers. You can refactor the app to use smart pointers as an exercise to improve your C++, but smart pointers are unnecessary as far as this course is concerned.

When possible, allocating objects on the stack is generally preferable to the heap. The stack is fast, code is simplified and memory cleanup is automatically handled when the function returns. However, for the purpose of this primer, putting memory on the stack wouldn't provide the opportunity to exercise pointers, which become necessary when an object allocation needs to outlive function scope, as it will in our labs.

