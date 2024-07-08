#include <cs50.h>
#include <stdio.h>

// Function
void print_row(int spaces, int bricks);

int main(void)
{
    // Get users Height
    int n;
    do
    {
        n = get_int("height: ");
    }
    // height restrictions 1-8
    while (n < 1 || n > 8);

    // Height of pyramid
    for (int i = 0; i < n; ++i)
    {
        int bricks = i + 1;
        int spaces = n - bricks;

        // print bricks
        print_row(spaces, bricks);
    }
}
// 2nd function
void print_row(int spaces, int bricks)
{
    // print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    // print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
