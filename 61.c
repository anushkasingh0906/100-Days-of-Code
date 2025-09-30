Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int a[100];
    int n;
    int num,found=0;
    printf("Enter a limit \n");
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter a number to be searched \n");
    scanf("%d",&num);
    
    for(int i=0; i<n; i++)
    {
        if(num==a[i])
        {
            found++;
            printf("Number %d is found at the index %d",num,i);
        }
    }
    if(found==0)
    {
        printf("-1");
    }
}

OUTPUT
Enter a limit 
3
12
-6
826
Enter a number to be searched 
11
-1
