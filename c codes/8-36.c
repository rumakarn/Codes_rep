#include <stdio.h>

int main()
{
    int i, j, m,k,a, n;
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
   printf("After reversing the matrix (%d*%d) column wise:\n",m,n);
 for(i=0;i<m;i++)
   {
       for(j=0;j<n/2;j++)
       {
         a = matrix[i][j];
         matrix[i][j] = matrix[i][n-j-1];
         matrix[i][n-j-1] = a;
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