#include <stdio.h>
#include <cs50.h>

void print_row(int length);
int length, height;
int main(void)
{
    int height = get_int("Height: ");
    for (int i = 0; i < height; i++)
    {
        print_row(i + 1);
    }
}

void print_row(int length)
{
    // Print spaces (dots) first
    for (int j = length; j < height; j++)
    {
        printf(".");
    }

    // Print hash symbols
    for (int k = 0; k < length; k++)
    {
        printf("#");
    }

    printf("\n");
}
