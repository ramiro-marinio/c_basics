#include <stdio.h>
int main()
{
    char c;
    int lines = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == 10)
        {
            lines++;
        }
    }
    printf("Finished. %i lines.", lines);
}