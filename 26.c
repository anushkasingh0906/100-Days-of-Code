Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value in n \n");
    scanf(" %d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ",i);
    }
}

OUTPUT
Enter the value in n 
6
1 2 3 4 5 6 

Enter the value in n 
12
1 2 3 4 5 6 7 8 9 10 11 12 
