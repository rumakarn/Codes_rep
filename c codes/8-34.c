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
   printf("After sorting the matrix (%d*%d) row wise:\n",m,n);
 for(i=0;i<m/2;i++)
   {
       for(j=0;j<n;j++)
       {
         a = matrix[i][j];
         matrix[i][j] = matrix[m-i-1][j];
         matrix[m-i-1][j] = a;
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