#include <cs50.h>
#include <stdio.h>

int main(void)
{
   
   // declaring the variables
   int blocks;
   int rows;
   int blank_space;
   int hash;
   
    // prompting user for integer and,
    do
    {
        printf("How many blocks can Mario jump?\n");
        blocks = GetInt();
    }
    // validating that the integer is between 0 and 23
    while ((blocks < 0) || (blocks > 23));
   
    // the nested 'for loop'
    for (rows = 1; rows <= blocks; rows++)
    {
            for (blank_space = (blocks - rows); blank_space > 0; blank_space--)
            {
                printf(" ");
            }
            for (hash = 1; hash <= (rows + 1); hash++)
            {
                printf("#");
            }
            
            printf("\n");
    }
    return 0;
}
