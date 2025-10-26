Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;  // To uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;  // To lowercase
    }

    printf("Toggled String: %s", str);
    return 0;
}

OUTPUT:
Enter a string: hello
Toggled String: HELLO
