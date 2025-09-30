Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>
int main() {
    int arr[100], n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    for(j = 0; j < k; j++) {
        temp = arr[n-1]; 
        for(i = n-1; i > 0; i--) {
            arr[i] = arr[i-1]; 
        }
        arr[0] = temp; 
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

OUTPUT
Enter number of elements: 5
Enter elements: 4
57
36
77
18
Enter k (number of positions to rotate): 3
Array after rotation:
36 77 18 4 57 
