# Static Libraries

A static library, also known as an archive, is a collection of object files that have been compiled and packaged together into a single file. It is called "static" because its contents are fixed at compile-time and are linked directly into the executable binary at build-time, rather than being loaded dynamically at runtime like a shared library.

Static libraries are useful because they can be distributed and used by other developers without requiring the source code. This means that the library code can be reused across multiple projects, reducing duplication of effort and improving code quality.

## Creating a Static Library

Here are the basic steps to create and use a static library:

1. Create the object files: First, you need to compile the source code into object files (.o) using the compiler. For example, if you have a source file called "mylib.c", you can compile it using the following command:
`gcc -c mylib.c`
This will generate a file called "mylib.o", which contains the compiled code for that file.

2. Create the static library: Once you have all the object files you need, you can package them together into a static library using the "ar" command. For example, if you have two object files called "foo.o" and "bar.o", you can create a static library called "libfoobar.a" using the following command:
`ar rcs libfoobar.a foo.o bar.o`
This command will create a static library named 'libfoobar.a' and puts copies of the object files "foo.o" and "bar.o" in it.
The "r" option means to insert or replace files in the archive, the "c" option means to create the archive if it doesn't exist, and the "s" option means to write an index to the archive.

Alternatively, you can index an archive using the command:
`ranlib libfoobar.a`

You can use the `nm` command to list the symbols defined in an object or archive as follows:
- List symbols in an object file: `nm foo.o bar.o`
- List symbols in an archive: `nm libfoobar.a`

3. Use the static library: To use the static library in your project, you need to link it with your executable at build-time. This is done using the "-l" and "-L" flags with the linker. For example, if you have a source file called "main.c" that uses the functions in "libfoobar.a", you can compile and link it using the following commands:
`gcc -c main.c`
`gcc -o myprogram main.o -L. -lfoobar`
The "-L." flag tells the linker to look for libraries in the current directory, and the "-lfoobar" flag tells it to link with "libfoobar.a". When you run "myprogram", the functions from "libfoobar.a" will be included in the binary and executed along with the rest of your code.

## Additional Tips and Considerations

Here are some additional tips and considerations when working with static libraries:

- You can include header files with your library to make it easier for other developers to use. Simply copy the header files into a separate directory and include that directory in your compiler's search path using the "-I" flag.

- You can create multiple static libraries for different parts of your code, and link them all together at build-time. This can help keep your code organized and make it easier to reuse across projects.

- If you make changes to your library code, you'll need to recompile and recreate the static library to incorporate those changes into your executable. This can be a bit tedious if you have a large library or many dependent projects, so consider using a build system like make or CMake to automate the process.

- Static libraries can make your executable larger, especially if you're including a lot of code that isn't actually used. Consider using linker flags like "-s" or "-Wl,--gc-sections" to strip unused code and reduce the size of your binary.
