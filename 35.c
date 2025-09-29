Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    printf("Factors of number %d=",num);
    for(int i=1 ; i<=num ; i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

OUTPUT
Enter a number 
18
Factors of number 18=1 2 3 6 9 18 

Enter a number 
54
Factors of number 54=1 2 3 6 9 18 27 54 
