#include "main.h"
/**
* print_alphabet - Function to print  uppearcase letters from 'a' to 'z'
* This cicle defines variables in ASCII code format
* Return: Always 0 (Success)
**/
void print_alphabet(void)
{
int az;
for (az = 97; az < 123; az++)
{
_putchar(az);
}
_putchar('\n');
}
