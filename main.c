#include "main.h"
/**
 * main - entry point
 * --------------
 * The main entry point of the program.
 * Reads integers from a file specified as a command-line argument and factorizes each integer.
 *
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * @return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
    // Check if the correct number of command-line arguments is provided
    if (argc != 2)
    {
        printf("Usage: ./file <filename>\n");
        return 1;
    }

    // Get the filename from the command-line argument
    char *filename = argv[1];

    // Open the file for reading
    FILE *file = fopen(filename, "r");

    // Check if the file can be opened successfully
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    int number;

    // Read integers from the file and factorize each one
    while (fscanf(file, "%d", &number) == 1)
    {
        factorize(number);
    }

    // Close the file
    fclose(file);

    return 0;
}
