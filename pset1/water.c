#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How long do you spend in the shower? ");
    int minutes = GetInt();
    printf("That's the equivalent of %d bottles\n", minutes * 12);
}