#include "variadic_functions.h"

/**
* print_strings - Will print strings given as parameters
* @separator: String to be printed between strings
* @n: Amount of strings passed to the function
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *str;
va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (!str)
str = "(nil)";
if (!separator)
printf("%s", str);
else if (separator && i == 0)
printf("%s", str);
else
printf("%s%s", separator, str);
}
va_end(ap);
printf("\n");
}
