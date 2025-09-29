Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number \n");
    scanf("%d",&num);

    for (int i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("%d is a Perfect number",num);
    }
    else
    printf("%d is not a perfect nummber",num);
}

OUTPUT
Enter a number 
57
57 is not a perfect nummber

Enter a number 
28
28 is a Perfect number
