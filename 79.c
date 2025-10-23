Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

#define ROW 3
#define COL 4

void diagonalTraversal(int mat[ROW][COL], int m, int n) {
    for (int d = 0; d < m + n - 1; d++) {
        int row = d < n ? 0 : d - n + 1;
        int col = d < n ? d : n - 1;
        while (row < m && col >= 0) {
            printf("%d ", mat[row][col]);
            row++;
            col--;
        }
    }
    printf("\n");
}

int main() {
    int mat[ROW][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    diagonalTraversal(mat, ROW, COL);
    return 0;
}

OUTPUT:
1 2 5 3 6 9 4 7 10 8 11 12 
