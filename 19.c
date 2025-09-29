Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        if (side1 == side2 && side2 == side3)
        {
            printf("Equilateral triangle");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            printf("Isosceles triangle");
        }
        else
        {
            printf("Scalene triangle");
        }
    }
    else
    {
        printf("Not a valid triangle");
    }
    return 0;
}

OUTPUT
Enter three sides of a triangle: 13 14 15
Scalene triangle

Enter three sides of a triangle: 12 12 17
Isosceles triangle
