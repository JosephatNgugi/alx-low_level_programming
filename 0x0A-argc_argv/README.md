# Main Function and Command-line Arguments

In C programming, you can pass arguments to a program when you run it from the command line. These arguments are passed as command line arguments and can be accessed inside the program using the argc and argv parameters of the main function, where `argc` stands for "argument count" and `argv` stands for "argument vector".
The declaration of main looks like this:

`int main(int argc, char *argv[])`

The argc parameter contains the number of arguments passed, including the name of the program itself, while the argv parameter is a pointer to an array of strings containing the actual arguments.

- The value of argc will always be at least 1, because the name of the program itself counts as the first argument.
- The first element of the array (`argv[0]`) is always the name of the program itself, and the remaining elements (`argv[1]`, `argv[2]`, etc.) contain the command-line arguments passed to the program.

For example, if you run the program `myprog` with the command `./myprog arg1 arg2 arg3`, the values of argc and argv would be:
`
argc = 4
argv[0] = "./myprog"
argv[1] = "arg1"
argv[2] = "arg2"
argv[3] = "arg3"
`

## Main Prototypes Alternative

While `int main(int argc, char *argv[])` is the standard prototype of the main function, there are two alternative prototypes of main function that are allowed by the C standard:
`int main(void)`
and
`int main(int argc, char **argv, char **envp)`
The first alternative prototype, `int main(void)`, indicates that the program takes no arguments. This is equivalent to `int main()`.
The second alternative prototype, `int main(int argc, char **argv, char **envp)`, indicates that the program takes command-line arguments and environment variables. The envp argument is an array of strings that contains the environment variables passed to the program.
The standard signature of main function (int main(int argc, char *argv[])) should be used in most cases, as it is the most common and widely recognized.
The alternative prototypes should only be used in special cases where they are specifically required by the platform or toolchain being used.

## Compiling with unused variables

Sometimes, we may encounter situations where you have variables or parameters in a function that are not used. This can result in warnings or errors when compiling the code. To avoid these warnings or errors, you can use the` __attribute__((unused))` or `(void)` keywords to indicate that the variable or parameter is intentionally not used.
- Here is an example of how to use `__attribute__((unused))`:

```
void myFunction(int x, __attribute__((unused)) int y) {
    printf("x = %d\n", x);
}
```

In this example, the y parameter is not used in the function, but we use the `__attribute__((unused))` keyword to tell the compiler that it is intentional.
- Here is an example of how to use (void):

```
void myFunction(int x, int y) {
    (void) y; // silence unused parameter warning
    printf("x = %d\n", x);
}
```
In this example, we cast the y parameter to (void) to indicate that it is not used in the function. This will silence any unused parameter warnings that the compiler may generate.
