#include "main.h"
/**
 * _isPrime - check for prime number
 * -------------------
 * Checks if a given integer 'n' is a prime number.
 *
 * @n: The integer to be checked.
 *
 * @return: 1 if 'n' is prime, 0 otherwise.
 */
int _isPrime(int n)
{
    int i = 0;

    // If 'n' is less than or equal to 1, it's not prime
    if (n <= 1)
        return (0);

    // Loop from 2 to the square root of 'n' to check for divisibility
    for (i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return (0); // If 'n' is divisible by 'i', it's not prime
    }

    return (1); // 'n' is prime
}
