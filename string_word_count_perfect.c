//AISHI DE
//Count words in a string

#include <stdio.h>

int main() {

    printf("Count Number of Words in the String!!\n\n");

    char str[100];

    printf("Enter your string:\n");
    scanf("%99[^\n]", str);

    int count = 0;
    int inWord = 0;
    
/*
inWord
Acts like a flag.
int inWord = 0;
Meaning:
0 = Currently NOT inside a word
1 = Currently inside a word
*/

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ' && inWord == 0) {
            count++;
            inWord = 1;
        }
        else if (str[i] == ' ') {
            inWord = 0;
        }
    }

    printf("\nThe number of words in the string \"%s\" is: %d\n",
           str, count);

    return 0;
}

