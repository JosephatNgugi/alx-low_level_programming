# Variadic Functions
Variadic functions are functions that can accept a variable number of arguments.
In C, variadic functions are implemented using the stdarg.h header file, which provides macros to access the arguments passed to the function.
Variadic functions are defined using an ellipsis ("...") in the argument list.

```
#include <stdarg.h>

int sum(int count, ...)
{
	int result = 0;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++)
	{
		int arg = va_arg(args, int);
		result += arg;
	}
	va_end(args);
	return result;
}
```

- Here, we are declaring a variadic function called 'sum' that takes an integer argument 'count', followed by a variable number of integer arguments.
## Descriptions of the macros used to retrieve variable arguments.

### Data Type:
- va_list args - Used for argument pointer variables.

### Macros:
- va_start(args, count) - Initializes the argument pointer variable to point to the first of the optional arguments.
- va_arg(va_list args, int) - Retrieves the value of the next optional argument.
- va_end(va_list args) - Clears/frees the list of arguments.
- To call the variadic function we can pass the number of arguments followed by the actual arguments.

```
int main(void)
{
	int result = sum(4, 2, 5, 7, 3);
	printf("%d\n", result);
	return (0);
}
```
Here, we are calling the 'sum' function with four arguments, 2, 5, 7, and 3.

