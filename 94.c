Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    longest[0] = '\0';

    while (1) {
        // Skip any spaces
        while (str[i] == ' ')
            i++;

        // If end of string, stop
        if (str[i] == '\0')
            break;

        // Extract one word
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        len = strlen(word);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }

        if (str[i] == '\0')
            break;
        i++; // Skip space
    }

    printf("Longest word: %s", longest);
    return 0;
}

OUTPUT:
Enter a sentence: Hello @123 How are you??
Longest word: Hello
