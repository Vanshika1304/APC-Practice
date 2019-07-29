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
    for(int i=1;i<n-2;i++)
    {
        if(arr[i]==arr[i+1]&&arr[i]==arr[i+2])
        {

        }
        else
        {
            arr[j]=arr[i];
            j++;
        }
    }
    arr[j]=arr[n-2];
    j++;
    arr[j]=arr[n-1];
    for(int i=0;i<=j;i++)
    {
        printf("%d ",arr[i]);
    }
}