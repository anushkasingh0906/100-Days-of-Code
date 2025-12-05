Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
/*
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
Explanation 1:
Output File (data.txt after execution): Hello world\nThis is appended text.
*/

input:

#include <stdio.h>

int main() {
    char filename[100];
    char text[500];
    FILE *fp;

    // Taking file name
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();  // to clear newline from buffer

    // Open file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Taking text input
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text
    fputs(text, fp);

    // Close file
    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
