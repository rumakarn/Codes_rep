#include <stdio.h>
int main()
{
    int i, j, m,k,a, n;
    int flag,row,col;
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
   printf("Enter the element to be searched:");
   scanf("%d",&a);
   for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(matrix[i][j]==a)
             flag=1;
            row=i;
            col=j;
        }
        printf("\n");
    }
     if(flag==1)
        printf("Position of Search Element %d is (%d, %d)",a,row,col);
    else
        printf("Given Search Element is not found....");
return 0;
}
    