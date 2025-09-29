Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
int main()
{
    int i,n;
    int fact=1;
    printf("enter a value in n \n");
    scanf("%d",&n);   
    for(i=1; i<=n; i++)
    {
        fact=i*fact;
    }
    printf("factorial of the number = %d",fact);

    return 0;
}
OUTPUT
enter a value in n 
5
factorial of the number = 120
