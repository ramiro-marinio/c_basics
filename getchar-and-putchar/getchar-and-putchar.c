#include <stdio.h>
/* copy input to output; 1st version */
int main()
{
    int c;
    printf("#1\n");
    c = getchar();
    printf("#2");
    while (c != EOF)
    {
        printf("#3\n");
        putchar(c);
        printf("BOMB HAS BEEN PLANTED: %c", c);
        c = getchar();
    }
    return 0;
}