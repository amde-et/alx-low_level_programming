#include "variadic_functions.h"

/**
* print_numbers - Will print numbers given as parameters
* @separator: String to be printed between numbers
* @n: Amount of integers passed to the function
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
if (!separator)
printf("%d", va_arg(ap, int));
else if (separator && i == 0)
printf("%d", va_arg(ap, int));
else
printf("%s%d", separator, va_arg(ap, int));
}
va_end(ap);
printf("\n");
}
