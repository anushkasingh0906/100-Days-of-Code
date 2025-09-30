Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include<stdio.h>
int main()
{
    int a[100];
    int n,even=0,odd=0;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
       if(a[i]%2==0)
       {
           even++;
       }
       else
       {
           odd++;
       }
    }
    printf("EVEN = %d \n",even);
    printf("ODD = %d",odd);
}

OUTPUT
Enter a limit 
4
61
45
73
85
EVEN = 0 
ODD = 4
