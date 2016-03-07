#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Prompt the user for change
    float owed;
    int counter = 0;
    
    do
    {
        printf("Welcome to Greedy! How much change do you require?\n");
        owed = GetFloat();
        if (owed <= 0)
        {
            printf("You need to enter a positive number, please try again.\n");
        }
    }
    while (owed <= 0);
    
    int change = roundf ((owed * 100));
    
    // calculate change
    
    
   
    while (change >= 25)
    {
        change -= 25;
        counter++;
    }
    
    while (change >= 10)
    {
        change -= 10;
        counter++;
    }
    
    while (change >= 5)
    {
        change -= 5;
        counter++;
    }
    
    while (change >= 1)
    {
        change -= 1;
        counter++;
    }
    
    printf("%d\n", counter);
}