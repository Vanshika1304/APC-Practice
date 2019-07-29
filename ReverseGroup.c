#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter group size: ");
    scanf("%d", &k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i+=k)
    {
        if((i+k)<=n)
        {
            for(int j=0;j<k/2;j++)
            {
                int t = arr[i+j];
                arr[i+j] = arr[i+k-1-j];
                arr[i+k-1-j] = t;
            }
        }
        else
        {
            for(int j=0;j<(n-i)/2;j++)
            {
                int t = arr[i+j];
                arr[i+j] = arr[n-1-j];
                arr[n-1-j] = t;
            }
        }
    }
    printf("Reverse Group\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
