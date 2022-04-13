#include "stdlib.h"
#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints name usign pointer to function
* @name: String to add
* @f: Pointer to function
* Return: Nothing
**/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && *name != '\0' && f != NULL)
f(name);
}
