Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h>

int main()
{
        int a,b,c;          // variable to store coefficents of a quadratic eq
        float determinant, root1 ,root2;    //variable to calculate determinat,root1 & root2
        printf("Enter coefficents of a,b&c \n");
        scanf("%d %d %d",&a,&b,&c);
        determinant=b*b-4*a*c;          //calculation of determinant
        
        if(determinant>0)
        {
            root1=(-b-sqrt(b*b-4*a*c))/2*a;         //calculation of root1
            root2=(-b+sqrt(b*b-4*a*c))/2*a;         //calculation of root2
            printf("Roots are real and different: %f, %f", root1 ,root2);
        }
        else if(determinant==0)
        {
            root1=-b/(2*a);                        //calculation of root
            printf("Roots is equal and real: %f", root1);
        }
        else
        {
            printf("Roots are complex");
        }
}

OUTPUT
Enter coefficents of a,b&c 
2 4 7
Roots are complex

Enter coefficents of a,b&c 
-9 10 5
Roots are real and different: 120.299400, -30.299402
