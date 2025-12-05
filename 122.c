Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23
Explanation 1:
The program reads each line from info.txt using fgets() and prints it until EOF.
*/

input:

#include <stdio.h>

int main() {
    char line[200];

    // Open the file in read mode
    FILE *fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file!");
        return 1;
    }

    // Read and print lines until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
