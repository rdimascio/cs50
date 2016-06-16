#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get user input
    printf("How long was your shower this morning?\n");
    printf("minutes: \n");
    int n = GetInt();
    
    // convert input
    int v = ((n * 192) / 16);
    printf("Your shower used %i bottles of water.\n", v);
}
