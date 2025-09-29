Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include<stdio.h>
int main()
{
    int n;          
    printf("Enter a number \n");
    scanf("%d",&n);
    if(n%2==0)          //check whether a number is even or odd 
    {
        printf("%d is Even",n);
    }
    else
    {
        printf("%d is Odd",n);
    }
}

OUTPUT
Enter a number 
22
22 is Even

Enter a number 
-9
-9 is Odd

