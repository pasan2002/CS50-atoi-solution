#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    printf("%i\n", convert(input));
}

int convert(string input)
{
    if (strlen(input) == 0)
    {
        return 0;
    }

    int numericValue = (input[strlen(input) - 1] - '0');

    input[strlen(input) - 1] = '\0';

    int remainingValue = convert(input);
    int result = remainingValue * 10 + numericValue;

    return result;
}



