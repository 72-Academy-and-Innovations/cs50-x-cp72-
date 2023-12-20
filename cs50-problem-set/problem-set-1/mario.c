#include <stdio.h>
#include <cs50.h>

void print_pyramid(int height);

int main(void)
{
    int height;

    // Getting the user input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    print_pyramid(height);

    return 0;
}

void print_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print hashes for left pyramid
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // Gap between the two halves of the pyramid
        printf("  ");

        // Print hashes for right pyramid
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}