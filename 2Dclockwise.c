#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=i;j<n-1-i;j++)
        {
            int temp = a[i][j];
            a[i][j] = a[n-1-j][i];
            a[n-1-j][i] = a[n-1-i][n-1-j];
            a[n-1-i][n-1-j] = a[j][n-1-i];
            a[j][n-1-i] = temp;
        }
    }
    printf("Array after clockwise rotation:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}