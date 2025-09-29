Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main()
{
    int num,r,mul=1;
    printf("enter a number \n");
    scanf("%d",&num);

    while(num>0)
    {
        r=num%10;
        if( r%2!=0 )
        {
            mul=mul*r;
        }
        num=num/10;
    }

    if(mul>1)
    {
    printf("Multiple of  the odd digits is : %d",mul);
    }
    else
    {
        printf(" 1 (no odd digits, assume 1) ");
    }

    return 0;
}

OUTPUT
enter a number 
85
Multiple of  the odd digits is : 5

enter a number 
98
Multiple of  the odd digits is : 9
