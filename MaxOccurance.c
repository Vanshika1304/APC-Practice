#include<stdio.h>
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int l[n],r[n];
    printf("Enter array 1:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    printf("Enter array 2:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
    }
    int m=r[0];
    for(int i=0;i<n;i++)
    {
        if(m<r[i])
        {
            m=r[i];
        }
    }
    int arr[m+2];
    for(int i=0;i<m+2;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int prev=0,max=0,index=0;
    for(int i=0;i<m+2;i++)
    {
        if(prev+arr[i]>max)
        {
            max=prev+arr[i];
            index=i;
        }
        prev=prev+arr[i];
    }
    printf("Maximum occuring element: %d",max);
}