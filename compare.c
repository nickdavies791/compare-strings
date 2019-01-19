#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Register function to compare strings
bool compare_string(char *a, char *b);

int main(void)
{
    // Get string a and store pointer to the first char
    char *a = get_string("a: ");
    // Get string b and store pointer to the first char
    char *b = get_string("b: ");

    // Check strings are same or different
    if (compare_string(a, b))
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

// Function to compare two strings
bool compare_string(char *a, char *b)
{
    // Return false if two strings are not same length
    if (strlen(a) != strlen(b))
    {
        return false;
    }

    // Loop through chars and return false if any are different
    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }

    // If all conditions above pass return true
    return true;
}
