Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>
int main()
{
    int limit_day, sub_day , fine , delay=0;
    printf("Enter the limit day and submission day \n");
    scanf("%d %d",&limit_day, &sub_day);
    delay=sub_day-limit_day;
    printf("DELAY %d \n",delay);
    if(delay<=5)
    {
        fine=(delay)*2;
        printf("Fine ₹%d",fine);
    }
    else if(delay<=10)
    {
        fine=delay*4;
        printf("Fine ₹%d",fine);   
    }
    else if(delay<=30)
    {
        fine=delay*6;
         printf("Fine ₹%d",fine);
    }
    else if(delay>30)
    {
        printf("Membership cancel");
    }
    else
    {
        printf("No fine");
    }
}

OUTPUT
Enter the limit day and submission day 
10 15
DELAY 5 
Fine ₹10

