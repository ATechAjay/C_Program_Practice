#include <stdio.h>
int main(void)
{
    int array1[100][100], array2[100][100], array3[100][100];
    int ROW, COL, k, l;
    printf("Enter the value of ROW in MATRIX?? ");
    scanf("%d", &ROW);
    printf("Enter the value of COL in MATRIX?? ");
    scanf("%d", &COL);
    printf("Enter the elements of the first matrix?? \n");
    for (k = 0; k < ROW; k++) //step one.
        for (l = 0; l < COL; l++)
            scanf("%d", &array1[k][l]);
    printf("Enter the elements of the second matrix?? \n");
    for (k = 0; k < ROW; k++) //step two.
        for (l = 0; l < COL; l++)
            scanf("%d", &array2[k][l]);
    //Addition start here...
    for (k = 0; k < ROW; k++) //step three.
        for (l = 0; l < COL; l++)
            array3[k][l] = array1[k][l] + array2[k][l];
    printf("Resultant Matrix is :)) \n");
    for (k = 0; k < ROW; k++) //step four.
        for (l = 0; l < COL; l++)
            printf("%d\t", array3[k][l]);
    printf("\n");
}
