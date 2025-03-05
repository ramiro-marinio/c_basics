#include <stdio.h>

int main()
{
    char *string = "This is supposed to be a string\n";
    char **pString = &string; // This is a pointer to a "string", although the string looks like a pointer because of the asterisk, so I'm fucking confused..
    printf("%s", string);
}