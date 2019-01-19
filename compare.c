#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get string a and store pointer to the first char
    char *a = get_string("a: ");
    // Get string b and store pointer to the first char
    char *b = get_string("b: ");

    // Check strings are same or different
    if (strcmp(a, b))
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
