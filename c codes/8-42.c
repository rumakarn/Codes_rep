#include <stdio.h>

int main()
{
    int i, j, m,a,n,k = 0, l = 0;
    int arr[10][20];

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
            scanf("%d", &arr[i][j]);
        }
    }

    /* Display the matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

while(k < m && l < n)
{
for(i = l; i < n; i++)
{
printf("%d",arr[k][i]);
}
k++;
for(i = k; i < m; i++)
{
printf("%d",arr[i][n-1]);
}
n--;
if(k < m)
{
for(i = n - 1; i >= 0; --i)
{
printf("%d",arr[m-1][i]);
}
m--;
}
if(l < n)
{
for(i = m - 1; i >= k; i--)
{
printf("%d",arr[i][l]);
}
l++;
}
}
return 0;

}