Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Input 1:
GUEST
Output 1:
Welcome Guest!
Explanation 1:
Enum value determines which message is displayed.
*/

input:

#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[10];
    enum Role r;

    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else if (strcmp(input, "GUEST") == 0)
        r = GUEST;
    else {
        printf("Invalid Role");
        return 0;
    }

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!");
            break;
        case USER:
            printf("Welcome User!");
            break;
        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}
