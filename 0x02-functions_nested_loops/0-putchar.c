#include "main.h"
/**
* main - This function prints the pharse '_putchar' to the StndOut
* The variable 'a' sets counter from 0
* The variable 'b' defines an array of the letters that are going to be written
* Return: Always 0 (Success)
**/
int main(void)
{
int a = 0;
char b[] = "_putchar/n";
for (a = 0; a < 11; a++)
{
_putchar(b[a]);
}
return (0);
}
