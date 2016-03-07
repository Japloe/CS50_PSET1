#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    do
    {
        printf("Enter a pyramid height (between 1 and 23): ");
        height = GetInt();
        if (height < 0 || height > 23)
        {
            printf("Please enter a number between 1 and 23");
            height = GetInt();
        }
    }
    while (height < 0 || height > 23);
    
   
    for (int i = 0; i < height; i++)
    {
       
       int j = 0;
       int k = height - 1;
       
       // spaces
       while (k > i)
       {
           printf(" ");
           k--;
       }
       
       // hashes
       do
       {
           printf("#");
           j++;
       }
       while(j < i + 2);
       
       printf("\n");
        
    }
   
}