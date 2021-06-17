#include <stdio.h>
int main(void)
{
    int m[10][10], m2[10][10];
    int a, b, row, col;
    printf("Enter ROW\n");
    scanf("%d", &row);
    printf("Enter COLUMN\n");
    scanf("%d", &col);
    printf("Enter the elements of the MATRIX:\n");
    for (a = 0; a < row; a++)
        for (b = 0; b < col; b++)
            scanf("%d", &m[a][b]);
    for (a = 0; a < col; a++)
        for (b = 0; b < row; b++)
            m2[a][b] = m[a][b];
    printf("Transpose of the matrix:\n");
    for (a = 0; a < col; a++)
    {
        for (b = 0; b < row; b++)
            printf("%d\t", m2[a][b]);
        printf("\n");
    }
    printf("\n");
    return 0;
}