#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get string a and store pointer to the first char
    char *a = get_string("a: ");
    // Get string b and store pointer to the first char
    char *b = get_string("b: ");

    // Check strings are equal
    if (strcmp(a, b) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
