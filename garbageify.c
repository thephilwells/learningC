#include <stdio.h>

/* copy input to output, replacing whitespaces with the ascii garbage peers */

int main()
{
    int c, d;

    while ((c = getchar()) != EOF)
    {
        d = 0;
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
            d = 1;
        }
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
            d = 1;
        }
        if (c == '\n')
        {
            putchar('\\');
            putchar('n');
            d = 1;
        }
        if (d == 0)
        {
            putchar(c);
        }
    }
    return 0;
}
