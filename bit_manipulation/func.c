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
