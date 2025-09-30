Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter tha number of rows \n");
    scanf("%d",&n);

    for(int i=1; i<=n; i=i+2)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=n-2; i>=0; i=i-2)
    {
    for(int j=1; j<=i; j++)
    {
        printf("*");
    }
    printf("\n");
    }
}

OUTPUT
Enter tha number of rows 
7
*
***
*****
*******
*****
***
*
