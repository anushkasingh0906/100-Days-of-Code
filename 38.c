Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main()
{
    int num,r,sum=0;
    printf("Enter a number \n");
    scanf("%d",&num);

    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("Sum of the digit of the nummber = %d",sum);

    return 0;
}

OUTPUT
Enter a number 
63
Sum of the digit of the nummber = 9

Enter a number 
95
Sum of the digit of the nummber = 14
