// AISHI DE
// Count words, display each word with its length,
// and find the longest word

#include <stdio.h>
#include <string.h>

int main() {

    char str[100];

    printf("Enter a string:\n");
    scanf("%99[^\n]", str);

    int start = 0;          // Starting index of current word
    int count = 0;          // Total number of words

    int maxLength = 0;      // Length of longest word
    int longestStart = 0;   // Starting index of longest word

    for (int i = 0; i <= strlen(str); i++) {

        // Check if word ends
        if (str[i] == ' ' || str[i] == '\0') {

            int length = i - start;

            // Ignore multiple spaces
            if (length > 0) {

                count++;

                printf("Word %d: ", count);

                // Print the word
                for (int j = start; j < i; j++) {
                    printf("%c", str[j]);
                }

                printf("\tLength: %d\n", length);

                // Check for longest word
                if (length > maxLength) {
                    maxLength = length;
                    longestStart = start;
                }
            }

            // Move start to next character
            start = i + 1;
        }
    }

    printf("\nTotal Words: %d\n", count);

    printf("Longest Word: ");
    for (int i = longestStart; i < longestStart + maxLength; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d\n", maxLength);

    return 0;
}