Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

  #include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i]))
            freq1[tolower(str1[i]) - 'a']++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i]))
            freq2[tolower(str2[i]) - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}

OUTPUT:
Enter first string: debit card 
Enter second string: bad credit
Anagrams
