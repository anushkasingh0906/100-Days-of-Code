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
    if(n==0)
    {
        printf("ZERO");
    }
    else
    {
        if(n<0)
        {
            printf("NEGATIVE");
        }
        else
        {
            printf("POSITIVE");
        }
    }
}

OUTPUT
Enter a number 
45
POSITIVE

Enter a number 
0
ZERO

Enter a number 
-55
NEGATIVE
