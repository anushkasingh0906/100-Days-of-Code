Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

  
#include<stdio.h>
int main()
{
    int sec,min,hr;     // sec=seconds , min=minutes , hr=hour
    printf("Enter time in seconds \n");
    scanf("%d",&sec);
    min=sec/60;         //calculate minutes
    sec=sec%60;         // store the reminding seconds 
    hr=min/60;          //calculate hours
    min=min%60;         // store the reminding minutes
    printf("%d:",hr);
    printf("%d:",min);
    printf("%d",sec);
}
OUTPUT
Enter time in seconds 
4351
1:12:31
