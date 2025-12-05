Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
Explanation 1:
The file has 31 characters including spaces and newlines, 5 words, and 2 lines.
*/

input:

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // File name input (optional)
    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Count words
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;   // End of a word
        } else if (inWord == 0) {
            inWord = 1;   // Start of a new word
            words++;
        }
    }

    // If file is not empty and last line has no newline, count it
    if (characters > 0)
        lines++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
