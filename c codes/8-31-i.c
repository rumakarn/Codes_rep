#include <stdio.h>

int main()
{
    int i, j, m, k, a, n;
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
    printf("After sorting the matrix (%d*%d) row wise:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
                if (matrix[i][j] > matrix[i][k])
                {
                    a = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = a;
                }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}