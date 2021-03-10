#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function add a plus b
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function sub a minus b
 * @a: first number
 * @b: second number
 *
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiply a time b
 * @a: first number
 * @b: second number
 *
 * Return: multiplitation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divide a by b
 * @a: first number
 * @b: second number
 *
 * Return: divition
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function come back the module of a divided by b
 * @a: first number
 * @b: second number
 *
 * Return: module of the divition
 */
int op_mod(int a, int b)
{
	return (a % b);
}
