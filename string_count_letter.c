// AISHI DE
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    printf("How many of your letter is there in the string!!\n\n");

    char letter;
    char str[100];

    printf("Enter your string:\n");
    scanf("%99s", str);

    printf("Enter the letter which you want to count:\n");
    scanf(" %c", &letter);

    int len = strlen(str);
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (tolower(str[i]) == tolower(letter)) {
            count++;
        }
    }

    printf("The count of the letter '%c' in the string \"%s\" is: %d\n",
           letter, str, count);

    return 0;
}