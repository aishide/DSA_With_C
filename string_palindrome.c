// AISHI DE
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    printf("Palindrome OR Not???!!\n\n");

    char str[100];

    printf("Enter your string: ");
    scanf("%99s", str);

    int len = strlen(str);
    int flag = 1;

    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - i - 1])) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("Your string \"%s\" is a Palindrome!!!\n", str);
    } else {
        printf("Your string \"%s\" is NOT a Palindrome!!!\n", str);
    }

    return 0;
}