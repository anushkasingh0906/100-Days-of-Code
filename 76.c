Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
int main() {
    int x[50][50]={0};
    int y[50][50]={0};
    int i,j,row,col;
    
    //taking rows and comlumn value
    printf("enter the amount of rows and column: ");
    scanf("%d %d ",&row,&col);
    
    //enter no  in the array
     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&x[i][j]);
    }



    for (i=0;i<col;i++)
    {
        for (j=0;j<row;j++)
            if (x[i][j]!=x[j][i])
            {
                printf("this is not a symmetric matrix!!");
                return 0;
            }
    }
    printf("this is a symmetric matric!!");
    return 0;


}

OUTPUT:
enter the amount of rows and column: 2 3
4 7 5
2 9 4
this is not a symmetric matrix!!
