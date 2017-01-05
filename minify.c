#include <stdio.h>

/* copy input to output, first version */

int main()
{
    int c;

    c = getchar();

    while ((c != EOF) == 1)
    {
        if ((c == '\n') || (c == '\t'))
        {
            c = ' ';
        }
        putchar(c);
        c = getchar();
    }
}