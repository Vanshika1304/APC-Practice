#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter number of rotations: ");
    scanf("%d",&x);
    int a[n];
    printf("Enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int q=x%n;
    for(int i=0;i<q;i++)
    {
        int m=a[n-1];
        for(int j=n-2;j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[0]=m;
    }
    printf("Array after n rotations:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}