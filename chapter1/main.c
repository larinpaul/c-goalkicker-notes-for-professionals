// Chapter 1: Getting started with C language


// Section 1.1.: Hello World

// To create a simple C program which prints "Hello World" on the screen,
// use a text editor to create a new file (e.g. hello.c -
// the file extension must be .c) containing the following source code:

// hello.c
#include <stdio.h>

int main(void)
{
    puts("Hello, World");
    return 0;
}

// Live demo on Coliru: Yeah, not gonna copy the link now...

// Let's look at this simple program line by line
#include <stdio.h>
// This line tells the compiler to include the contents of the standard libary header file stdio.h in the program.
// Headers are usually files containing function declarations, macros and data types,
// and you must include the header file before you use them.
// This lien includes stdiio.h so it can call the function puts().

// See more avout headers...

int main(void)
// This line starts the definition of a function. It states the name of the function (main),
// the type and number of arguments it expects (void, meaning none), and the type of value
// that this function returns (int).
// Program execution starts in the main() function.
{
	...
}
// The curly braces are used in pairs to indicate where a block of code begins and ends.
// They can be used in a lot of ways, but in this case they indicate
// where the function begins and ends.

puts("Hello, World");
// This line calls the puts() function to output text to standard output
// (the screen, by default) followed by a newline.
// The string to be output is included within the parentheses.
// "Hello, World" is the string that will be written to the screen.
// In C, every string literal value must be inside the double quotes "...".

// See more about strings.

// In C programs, every statement needs to be terminated by a semi-colon (i.e. ;).
returrn 0;

// When we defined main(), we declared it as a function returning an int,
// meaning it needs to retunr an integer. In this example, we are returning the integer value 0,
// which is used to indicate that the program exited successfully.
// After the retunr 0; statement, the execution process will terminate.

// Editing the program

// Simple text editors include vim or gedit on Linux, or Notepad on Windows.
// Cross-platform editors also include
// Visual Studio Code or Sublime Text.

// The editor must create plain text files, not RTF or other any other format.

// Compiling and running the program.

// To run the program, this source file (hello.c) first need to be compiled
// into an executable file (e.g. hello on Unix/Linux system or hello.exe on Windows).
// This is done using a compiler for the C language.

// See more about compiling

//** Compile using GCC

// GCC (GNU Compiler Collection) is a widely used C compiler.
// To use it, open a terminal, use the command line to nagivate to the
// source file's location and then run:
gcc hello.c -o hello

// If no errors are found in the source code (hello.c), the compiler will create a binary file,
// the name of which is given by the argument to the -o command line option (hello).
// This is the executable file.

// We can also use the warning options -Wall -Wextra -Werror,
// They are not necessary for this simple program, but this is a way of adding them
gcc -Wall -Wextra -Werror -o hello hello.c

//** Using the clang compiler
// To compile the program using clang you can use:
clang -Wall -Wextra -Werror -o hello hello.c

//** Using the Microsoft C compiler from the command line
// If using the Microsoft cl.exe compiler on a Windows system which supports Visual Studio
// and if all environment variables are set, this C example may be compiled like this:
cl hello.c
// (There are warning options such as /W3 for cl, roughly analogous to -Wall etc for GCC or clang).

//** Executing the program
// Once compiled, the binary file may then be executed by typing ./hello in the terminal.
// Upon execution, the compiled program will print Hello, World, followed by a newline, to the command prompt.


//# Section 1.2: Original "Hello, World!" in K&R C

// The following is the original "Hello, World!" program from the book
// The C Programming Language by Vrian Kernighan and Dennis Ritchie
// (Ritchie was the original developer of the C programming langauge at Bell Labs),
// referred to as "K&R":
#include <stdio.h>

main()
{
	printf("hello, world\n");
}
// Notice that the C programming langauge was not standartized
// at the time of writing the first edition of this book (1978),
// and that this program will probably not compile
// on most modern computers unless they are instructed to accept C90 code.

// This very first example in the K&R book is not considered poor quality,
// in part because it lacks an explicit returns type for main()
// and in part because it lacks a return statement.
// The 2nd edition of the book was written for the old C89 standard.
// In C89, the type of main would default to int, but the K&R example does not return a defined value to the environment.
// In C99 and later standards, the return type is required,
// but it is safe to leave out the return statement of main (and only main),
// because of a special case introduced with C99 5.1.2.2.3 -
// it is equivalent to returning 0, which indicates success

// The recommended and most portable form of main for hosted systems is int main (void)
// when the program does not use any command line arguments,
// or int main(int argc, char **argv) when the program does use the command line arguments.


// C90 5.1.2.2.3. Program termination
// A return from the initial call to the main functions is equivalent to calling the exit function
// with the value returned by the main function as its argument...

// C90 6.6.6.4 The return statement
...

// C99 5.1.2.2.3 Program termination
// ...
