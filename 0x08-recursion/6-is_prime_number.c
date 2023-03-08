#include "main.h"
/**
 * check_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int i)
{
if (n % i == 0)
return (0);

return (check_prime(n, i - 1));
if (i == 1)
return (1);

else if (i == 0 || i < 0)
return (0);
}

int check_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
return (check_prime(n, n - 1));
}

