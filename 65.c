Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main() {
    int x[50];
    int i,n,f;
    int even=0, odd=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("enter the number you want to find: ");
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(x[i]==f)
        printf("%d is at %d index\n",f,i);
        
    }
}

OUTPUT
enter the numbers : 3
27
-2
64
enter the number you want to find: 55
