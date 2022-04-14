#include "main.h"

/**
* get_bit - Gets the value of a bit at a given index
* @n: The bit
* @index: The index to get the value and start at 0
* Return: The value of a bit at a given index or -1 if error
**/

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
if ((n & (1 << index)) == 0)
return (0);
return (1);
}
