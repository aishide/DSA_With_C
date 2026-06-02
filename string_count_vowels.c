// AISHI DE

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    printf("How many vowels are there in the string!!\n\n");

    char str[100];

    printf("Enter your string:\n");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("\nThe count of the vowels in the string \"%s\" is: %d\n",
           str, count);

    return 0;
}


/*
Syntax : fgets(array_name, size, input_source);
fgets(str, sizeof(str), stdin);
str → where the input will be stored.
sizeof(str) → maximum number of characters to read.
stdin → standard input (the keyboard).

strcspn(string1, string2);
Example:
char str[] = "Hello\n";
Memory:
Index: 0 1 2 3 4 5 6
       H e l l o \n \0
Now:
strcspn(str, "\n")
returns:
5
because \n is found at index 5.
so finally it becomes - > becomes: H e l l o \0
*/