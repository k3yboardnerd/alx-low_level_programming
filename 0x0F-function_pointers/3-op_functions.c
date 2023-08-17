#include "3-calc.h"
/**
 * op_add - This func sums /adds a and b
 * @a: first num to be added
 * @b: second num to be added
 *
 * Description: This func return the sum of a and b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - This func returns difference of a and b
 * @a: first num to be subbed
 * @b: second num to be subbed
 *
 * Description: This func returns difference of a and b
 * Return: sub of a and b / Error
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This func return multiplication of a and b
 * @a: first num to be multiplied
 * @b: second num to be multiplied
 *
 * Description: This func multiplies a and b
 * Return: Multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This func divides a and b
 * @a: first num to be divided
 * @b: second num to be divided
 *
 * Description: This func divides a and b
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This func returns the remainder of a and b
 * @a: the first num to be divided
 * @b: the second num to be divide
 *
 * Description: This func returns the remainder of a and b
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
