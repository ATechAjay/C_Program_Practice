#include <stdio.h>
int main(void)
{
    int m1[10][10], m2[10][10], m3[10][10];
    int row1, row2, col1, col2;
    int a, b, c;
    printf("Enter the value of ROW in M1");
    scanf("%d", &row1);
    printf("Enter the value of COLULMN  in M1");
    scanf("%d", &col1);
    row2 = col1;
    printf("Enter the value of COLUMN in M2");
    scanf("%d", &col2);
    printf("Enter the elements of the first Matrix??\n");
    for (a = 0; a < row1; a++)
        for (b = 0; b < col1; b++)
        {
            scanf("%d", &m1[a][b]);
        }
    printf("Enter the elements of the Second Matrix??\n");
    for (a = 0; a < row2; a++)
        for (b = 0; b < col2; b++)
        {
            scanf("%d", &m2[a][b]);
        }
    for (a = 0; a < row1; a++)
        for (b = 0; b < col2; b++)
        {
            m3[a][b] = 0;
            for (c = 0; c < col1; c++)
                m3[a][b] = m3[a][b] + m1[a][c] * m2[c][b];
        }
    printf("This is Resultant Matrix: \n");
    for (a = 0; a < row1; a++)
    {
        for (b = 0; b < col1; b++)
            printf("%d\t", m3[a][b]);
        printf("\n");
    }
    printf("\n");
    return 0;
}