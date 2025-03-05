#include <stdio.h>
#define MIN 0
#define MAX 255

int main()
{
    for (int i = MIN; i < MAX; i++)
    {
        printf("%i -> ", i);
        putchar(i);
        printf("\n");
    }
}