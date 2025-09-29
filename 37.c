Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() {
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b;
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d = %d\n", a, b, lcm);
            break;
        }
        ++lcm;
    }
    return 0;
}

OUTPUT
Enter two numbers: 63 71
LCM of 63 and 71 = 4473

Enter two numbers: 81 34
LCM of 81 and 34 = 2754
