/**
 * _pow - return x ^ y
 *  @x: int
 *  @y: int
 *  Return: int
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
/**
 * _pow_index - return index of pow
 *  @base: int
 *  @n: nimber
 *  Return: int
 */
int _pow_index(int base, unsigned long int n)
{
	int pow_index = 0;
	unsigned long int max_pow = 1;

	while (max_pow <= n / base)
	{
		pow_index++;
		max_pow *= base;
	}
	return pow_index;
}
