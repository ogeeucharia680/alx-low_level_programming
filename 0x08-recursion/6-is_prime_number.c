#include "main.h"

intactual_prime(int n, inti);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
intis_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
intactual_prime(int n, inti)
{
	if (i == 1)
		return (1);
	if (n % i == 0 &&i> 0)
		return (0);
	return (actual_prime(n, i - 1));
}
