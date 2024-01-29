#include "main.h"
/**
 * factorize - factorize
 * --------------------
 * Finds and prints the prime factorization of a given unsigned long integer 'n'.
 * Prints the factors in the format "n = factor * divisor".
 *
 * @n: The integer to be factorized.
 */
void factorize(unsigned long n)
{
    // Initialize divisor to 2, factor_found flag to 0, and calculate initial factor
    unsigned long divisor = 2;
    int found = 0;
    unsigned long factor = n / divisor;

    // Loop until the square of the divisor is greater than or equal to n
    while (divisor * divisor <= n)
    {
        // If n is divisible evenly by divisor, print the factorization and return
        if (n % divisor == 0)
        {
            printf("%lu=%lu*%lu\n", n, factor, divisor);
            found = 1;
            return;
        }

        // If divisor is 2, increment by 1; otherwise, increment by 2 (checking odd numbers)
        if (divisor == 2)
            divisor++;
        else
            divisor += 2;
    }

    // If no factor is found, print n as the product of itself and 1
    if (!found)
    {
        printf("%lu=%lu*1\n", n, n);
    }
}
