#include <stdio.h>

/* copy input to output, first version */

int main()
{
    int c;

    c = getchar();

    while ((c != EOF) == 1)
    {
        putchar(c);
        c = getchar();
    }

    /* print EOF */
    // putchar(c);
}