/**
 * factor_rsa - factorize a prime
 * ---------------------
 * Factorizes a given integer 'n' into two prime numbers 'p' and 'q'.
 *
 * @n: The integer to be factorized.
 */
void factor_rsa(int n)
{
    int p = 2;
    int q = n / p;

    // Find two prime numbers 'p' and 'q' such that 'p * q = n'
    while (!is_prime(p) || !is_prime(q))
    {
        ++p;
        q = n / p;
    }

    printf("%d = %d * %d", n, p, q);
}

