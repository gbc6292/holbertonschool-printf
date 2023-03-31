Custom printf Function

This is a custom printf function in C. The function is designed to print strings, characters, and integers based on a provided format string.


To use this custom printf function, include the header file main.h in your C program and call the function using the following syntax:

_printf(format, arg1, arg2, ...)

    format is a string that specifies how to format the output, using format specifiers that begin with a % character.
    arg1, arg2, etc. are the arguments to be printed, which must correspond to the format specifiers in the format string.

The function returns the total number of characters printed, or 0 if the format string or argument list is empty.
Supported Format Specifiers

The following format specifiers are currently supported by the custom printf function:

    %c - print a single character
    %s - print a string
    %% - print a literal % character
    %d or %i - print an integer

Helper Functions

The custom printf function is implemented using several helper functions:

    print_char(char a) - prints a single character using _putchar function and returns the number 1 to indicate that it printed one character.
    print_string(char *b) - prints a string using _putchar function and returns the number of characters printed.
    pr_int(int n) - prints an integer recursively using _putchar function and returns the total number of characters printed.

Notes

    The _putchar function is used to print characters in this implementation. This function is not a standard C function and may have different implementations depending on the environment.
    This implementation does not currently support all of the features and format specifiers of the standard printf function in C.
    This implementation may have limitations or issues depending on the specific requirements and use cases.

Examples

Here are some examples of how to use the custom printf function:

#include "main.h"

int main()
{
    int num = 12345;
    char* str = "Hello, world!";

    _printf("Printing a character: %c\n", 'A');
    _printf("Printing a string: %s\n", str);
    _printf("Printing a percent sign: %%\n");
    _printf("Printing an integer: %d\n", num);

    return 0;
}

Output:

Printing a character: A
Printing a string: Hello, world!
Printing a percent sign: %
Printing an integer: 12345
