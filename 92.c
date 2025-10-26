Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};
    char result = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                result = ch;
                break;
            }
        }
    }

    if (result != '\0')
        printf("%c", result);
    else
        printf("No repeating lowercase alphabet found");

    return 0;
}

OUTPUT:
Enter a string: HELLO @123 how are you
o
