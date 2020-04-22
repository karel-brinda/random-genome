#include <cstdlib>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <lenght>\n", argv[0]);
        return 1;
    }

    srand(42);

    long long length = atol(argv[1]);

    char c = '~';
    char chars[] = "ACGT";
    int j = 0;
    for (long long i = 0; i < length; i++)
    {
        if (i % (100 * 1000 * 1000) == 0)
        {
            if (i != 0)
            {
                putchar('\n');
            }
            printf(">random_genome.contig%d", ++j);
        }
        if (i % 1000 == 0)
        {
            putchar('\n');
        }
        c = chars[rand() % 4];
        putchar(c);
    }
    putchar('\n');

    return 0;
}
