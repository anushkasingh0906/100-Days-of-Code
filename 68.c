Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main() {
    int arr[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    printf("Enter position to delete (0 to %d): ", n-1);
    scanf("%d", &pos);

    
    for(i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--; 

  
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

OUTPUT
Enter number of elements: 4
Enter elements: 3
26
14
27
Enter position to delete (0 to 3): 1
Array after deletion:
3 14 27 
