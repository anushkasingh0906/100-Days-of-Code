Q138: Print all enum names and integer values using a loop.

/*
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
Explanation 1:
Iterating through enum values prints each constant with its assigned integer.
*/

input:

#include <stdio.h>

enum Colors {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum Colors c;

    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (c = RED; c <= GREEN; c++) {
        printf("%s=%d\n", names[c], c);
    }

    return 0;
}
