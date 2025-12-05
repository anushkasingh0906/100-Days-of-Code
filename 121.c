Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt
Explanation 1:
Expected File Content (info.txt): Name: Rahul Age: 23
*/

input:

#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Taking input
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Age: ");
    scanf("%d", &age);

    // Creating and opening file in write mode
    FILE *fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Writing data to the file
    fprintf(fp, "Name: %sAge: %d\n", name, age);

    // Closing file
    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
