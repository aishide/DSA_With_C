#include <stdio.h>
#include <string.h>
#include <ctype.h>

//AISHI DE

int main() {
    
    char str1[200], str2[200];
    
    printf("Enter the first string : \n");
    scanf("%s", str1);
    
    printf("Enter the second string : \n");
    scanf("%s", str2);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if(len1 != len2) {
        printf("The strings are not anagram\n");
        return 0;
    }
    
    int count[256] = {0};
    
    for(int i  = 0; i < len1 ; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }
    
    for(int i = 0 ; i < 256 ; i++) {
        if (count[i] != 0 ){
            printf("The strings are not an anagram\n");
            return 0;
        }
    }
    
    printf("\n The strings %s and %s are anagrams", str1, str2);
    return 0;
}

//it means same number of letters in the words but in different order. For example, "listen" and "silent" are anagrams of each other.