// AISHI DE
// Count words
// Total words = Number of spaces + 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    printf("Count Number of Words in the String!!\n\n");

    char str[100];

    printf("Enter your string:\n");
    scanf("%99[^\n]", str);

    printf("\n");

    int len = strlen(str);
    int count = 0;

    for (int i = 0; i < len; i++) {

        char the_string = tolower(str[i]);

        if (the_string == ' ') {
            count++;
        }
    }

    printf("The number of words in the string \"%s\" is: %d\n",
           str, count + 1);

    return 0;
}