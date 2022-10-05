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
   printf("After sorting the matrix (%d*%d) column wise:\n",m,n);
   for (j=0;j<n;++j){
      for (i=0;i<m;++i){
         for (k=i+1;k<m;++k){
            if (matrix[i][j] > matrix[k][j]){
               a = matrix[i][j];
               matrix[i][j] = matrix[k][j];
               matrix[k][j] = a;
            }
         }
      }
   }
   for (i=0;i<m;++i){
      for (j=0;j<n;++j){
         printf (" %d",matrix[i][j]);
      }
      printf ("\n");
   }
}