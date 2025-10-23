Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>
int main(){

    int x[25][25]={0};
    int i,j,col,row;
    printf("enter the amount of rows and columns: ");
    scanf("%d %d",&row ,&col);
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&x[i][j]);
    }
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        printf("%d ",x[i][j]);
        printf("\n");
    }

//addition
    int sum=0;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        sum=sum+x[i][j];
    }

    printf("sum is : %d",sum);


}

 OUTPUT:
 enter the amount of rows and columns: 2 3
5 7
4 6
8 2
5 7 4 
6 8 2 
sum is : 32
