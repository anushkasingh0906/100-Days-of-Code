Q120: Write a program to take a string input. Change it to sentence case.

/*
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic
Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.
Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/

input:

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int capitalize = 1;  // start by capitalizing first letter

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // convert to uppercase
        } else if (!capitalize && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // convert to lowercase (optional)
        }

        // Next character should be capitalized if current is a space
        capitalize = (str[i] == ' ');
    }

    printf("%s", str);

    return 0;
}
