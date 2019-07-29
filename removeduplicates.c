#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    int j=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    for(int i=0;i<=j;i++)
    {
        printf("%d ",arr[i]);
    }
}