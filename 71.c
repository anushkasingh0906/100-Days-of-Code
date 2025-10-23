Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>
int main(){

    int x[50]={0};
    int col,row,i,j;
    printf("enter the no. of rows and column for the martix: ");
    scanf("%d %d",&row ,&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&x[i*col+j]);
        }
        printf("\n");
    }

    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",x[i*col+j]);
        }
        printf("\n");
    }



    
    return 0;



} 

OUTPUT:
enter the no. of rows and column for the martix: 2 2
6 7

84
5 6

6  7  
84  5  
