#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>

int main(void) {
    
    printf("What is your name?\n");
    string name = GetString();
    
    if (name != NULL) 
    {
        printf("%c", toupper(*name));
        
        for (int i = 0, n = strlen(name); i < n; i++) 
        {
            if (name[i] == ' ') 
            {
                printf("%c", toupper(name[i + 1]));
            }
        }
    }
    printf("\n");
}
