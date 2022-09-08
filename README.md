# 42Network_CPP
These modules are an introduction to Object Oriented Programming. This will be the starting point of the C++ journey. You will discover new concepts step-by-step. The exercises will progressively increase in complexity.

## General rules
### Compiling
- Compile your code with *c++* and the flags *-Wall -Wextra -Werror*
- Your code should still compile if you add the flag *-std=c++98*

### Formatting and naming conventions
-	The exercise directories will be named this way: *ex00, ex01, ... , exn*
-	Name your files, classes, functions, member functions and attributes as required in the guidelines.
-	Write class names in **UpperCamelCase** format. Files containing class code will always be named according to the class name.
-	Unless specified otherwise, every output messages must be ended by a new-line character and displayed to the standard output.

### Allowed/Forbidden
-	You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use as much as possible the C++-ish versions of the C functions you are used to.
-	However, you can’t use any other external library. It means C++11 (and derived forms) and *Boost* ibraries are forbidden. The following functions are forbidden too: *printf()*, *alloc()* and *free()*.
-	Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden.
-	**You are allowed to use the STL in Module 08 only**. That means: no **Containers** (vector/list/map/and so forth) and no **Algorithms** (anything that requires to include the <algorithm> header) until then.

### A few design requirements
-	Memory leakage occurs in C++ too. When you allocate memory (by using the *new* keyword), you must avoid **memory leaks**.
-	From Module 02 to Module 08, your classes must be designed in the **Orthodox Canonical Form**, except when explicitely stated otherwise.
-	You should be able to use each of your headers independently from others. Thus, they must include all the dependencies they need. However, you must avoid the problem of double inclusion by adding **include guards**.
