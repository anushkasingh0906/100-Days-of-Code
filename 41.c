Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>

int main()
{
    int num, temp, digit=0;
    int first, last, middle, powTen, swapped;

    printf("Enter a number \n");
    scanf("%d",&num);

    temp = num;

    // count digits
    while(temp > 0)
    {
        digit++;
        temp = temp/ 10;
    }

    powTen = (int)pow(10, digit-1);

    first = num / powTen;        // first digit
    last = num % 10;             // last digit
    middle = (num % powTen) / 10; // remove first & last

    swapped = last * powTen + middle * 10 + first;

    printf("Swapped num = %d\n", swapped);

    return 0;
}

OUTPUT
Enter a number 
53
Swapped num = 35

Enter a number 
47
Swapped num = 74
