#include <stdio.h>

int main()
{
    int i, j, m,k,a,b,c,n;
    int matrix[10][20];

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    /* Input data in matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    /* Display the matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < m; ++i)
    {
        /*  first row has index is 0 */
        c = matrix[i][0];
        matrix[i][0] = matrix[i][n-1];
        matrix[i][n-1] = c;
    }
    printf("The matix after interchanging the two rows(in the original matrix) \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
     }
     return 0;
}