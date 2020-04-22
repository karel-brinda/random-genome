#include <errno.h>
#include <stdio.h>
#include <zlib.h>
#include <cstdlib>
#include <cmath>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <lenght>\n", argv[0]);
        return 1;
    }

    long long length = atol(argv[1]);
	printf(">random_genome");

	char c='~';
	for (long long i=0; i<length; i++) {
		if (i%1000==0) {
			putchar('\n');
		}
		c='A';
		putchar(c);
	}
	putchar('\n');

    return 0;
}
