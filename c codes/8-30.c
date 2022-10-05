#include <stdio.h>
#define MAX 100
void firstocc(int arr[], int n);
void lastocc(int arr[], int n);
int main()
{
    int arr[MAX], i, j, n, count = 0;
    printf("enter the number of elements:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    firstocc(arr, n);
    lastocc(arr, n);
    return 0;
}
void firstocc(int arr[], int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
            if (count == 1)
                printf("The first occurence of element is on %d position\n", j);
        }
    }
    return;
}
void lastocc(int arr[], int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
                count++;
            if (count == 1)
                printf("The last occurence of element is on %d position\n", j);
        }
    }
    return;
}
