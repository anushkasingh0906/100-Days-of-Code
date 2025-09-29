Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include<stdio.h>
int main()
{
    float sum=0.0;
    int n;
    printf("Enter a limit \n");
    scanf("%d",&n);
    int i=2,j=3;
    for(int k=1; k<=n ; i=i+2, j=j+4, k++)
    {   
        sum=sum+((float)i/j);
    }
    printf("Approximate sum: %.1f",sum);
}

OUTPUT
Enter a limit 
54
Approximate sum: 27.6

Enter a limit 
85
Approximate sum: 43.2
