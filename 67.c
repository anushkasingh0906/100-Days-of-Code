Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int arr[100], n, i, num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &num);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = num;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

OUTPUT 
#include <stdio.h>

int main() {
    int arr[100], n, i, num, pos;

    // input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // input array
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // input element and position
    printf("Enter element to insert: ");
    scanf("%d", &num);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    // shift elements to right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // insert element
    arr[pos] = num;
    n++;

    // print array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

OUTPUT
Enter number of elements: 3
Enter elements: 5
34
12
Enter element to insert: 65
Enter position (0 to 3): 2
Array after insertion:
5 34 65 12 
