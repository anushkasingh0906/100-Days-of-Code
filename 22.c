Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main()
{
    float cp, sp, profit, loss;
    printf("Enter the cost price and selling price:\n");
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        profit = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", profit);
    }
    else if (sp < cp)
    {
        loss = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", loss);
    }
    else
    {
        printf("No profit, no loss");
    }

    return 0;
}

OUTPUT
Enter the cost price and selling price:
7654 5369
Loss = 29.85%

Enter the cost price and selling price:
1000 7890
Profit = 689.00%
