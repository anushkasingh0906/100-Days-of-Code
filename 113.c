Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5
Explanation 1:
4th smallest element in the given array is 5.
Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7
Explanation 2:
3rd smallest element in the given array is 7.
*/

input:
  
#include <stdio.h>

// Function to sort the array (Bubble Sort)
void sort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, k;

    // Taking size of array
    scanf("%d", &n);

    int arr[n];
    
    // Taking array input
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking k
    scanf("%d", &k);

    // Sort the array
    sort(arr, n);

    // Print kth smallest element
    printf("%d", arr[k-1]);

    return 0;
}
