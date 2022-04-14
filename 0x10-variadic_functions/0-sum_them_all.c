#include "variadic_functions.h"

/**
* sum_them_all - Will sum a variable number of parameters
* @n: Amount of parameters
* Return: Sum of all parameters
**/

int sum_them_all(const unsigned int n, ...)
{
va_list ap; /** Macro that defines a list of argument paramenters */
unsigned int i = 0; /** Counter */
int sum = 0; /** Resulting value of the sum */
if (n == 0) /** Will check if is or is not reciving parameters */
{
return (0); /** Will return 0 is has no values */
}
else
{
va_start(ap, n); /** Initializes the use of the list */
for (i = 0; i < n; i++) /** Loops the function to sum parameters */
{
sum += va_arg(ap, int); /** Adds the list of argument parameters to the sum */
}
va_end(ap); /** Marker wich defines the end of use of the list */
}
return (sum); /** Will return the resulting value of the sum */
}
