/**
* flip_bits - Number of different bits between two numbers
* @n: Number one
* @m: Number two
* Return: Number of bits would need to flip
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits;
for (nbits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
nbits++;
}
return (nbits);
}
