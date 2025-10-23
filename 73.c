Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>
int main (){
    int x[50][50]={0};
    int sum[50];
    int col, row, i,j ;
    printf ("Enter the amount of rows and column: ");
    scanf("%d %d",&row,&col);

    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&x[i][j]);
    }
    printf("\n\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        printf("  %d",x[i][j]);
        printf("\n");
    }
printf("\n\n");
    //addition
    int sum_;
    for (i=0;i<row;i++)
    {
        sum_=0;
        for(j=0;j<col;j++)
        sum_=sum_+x[i][j];
        sum[i]=sum_;
    }
    for(i=0;i<row;i++)
    {
        printf("  %d",sum[i]);
    }

} 

OUTPUT:
 Enter the amount of rows and column: 3 4
8 5 9
32 9 5
26 75 41
5 6 8


  8  5  9  32
  9  5  26  75
  41  5  6  8


  54  115  60
