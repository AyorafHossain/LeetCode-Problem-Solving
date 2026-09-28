#include <stdio.h>
#include <limits.h>

int main()
{
    int x = 120, rem, reverse = 0;

    while (x != 0)
    {
        rem = x % 10;

        if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
        {
            return 0;
        }

        reverse = reverse * 10 + rem;

        x = x / 10;
    }

    printf("Reverse = %d\n", reverse);

    return 0;
}
