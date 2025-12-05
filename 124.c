Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
/*
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
Explanation 1:
Expected File (destination.txt): Learning C File Handling
*/

input:

#include <stdio.h>

int main() {
    char source[100], dest[100];
    FILE *fs, *fd;
    int ch;

    // Taking filenames
    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    // Open source file in read mode
    fs = fopen(source, "r");
    if (fs == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    // Open destination file in write mode
    fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(fs);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    // Close both files
    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s\n", dest);

    return 0;
}
