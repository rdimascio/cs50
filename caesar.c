#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>


string encode_msg(string, int);
char encode_char(int, int);

int main(int argc, string argv[]) {
    
    // check for cipher as an argument
    if (argc > 2) {
        printf("Please enter a valid key.\n");
        return 1;
    }
    
    else if (argc < 2) {
        printf("Please enter a key.\n");
        return 1;
    }
    else {
        printf("Enter your message: \n");
        string msg = GetString();
        
        int key = atoi(argv[1]);
    
        encode_msg(msg, key);
        return 0;
    }
}

string encode_msg(string msg, int key) {
    int msglen = strlen(msg);
    int j;
    
    // 
    for (int i = 0; i < msglen; i++) {
        j = msg[i];
        
        // 
        if(isalpha(j)) {
            encode_char(j, key);
        }
        
        // 
        else {
            printf("%c", j);
        }
    }
    printf("\n");
    return 0;
}

char encode_char(j, key) {
    char c;
    int start;
    
    if isupper(j) {
        start = 65;
    }
    else {
        start = 97;
    }
    
    key = ((j - start) + key) % 26;
    
    c = start + key;
    
    printf("%c", c);
    return 0;
}
