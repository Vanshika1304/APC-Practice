#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter marks:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter range: ");
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int l1=0,l2=0,r1=n-1,r2=n-1;
    int mid;
    while(l1<r1)
    {
        mid=(l1+r1)/2;
        if(arr[mid]>=num1)
        {
            r1=mid;
        }
        else
        {
            l1=mid+1;
        }
    }
    while(l2<r2)
    {
        mid=(l2+r2)/2;
        if(arr[mid]<=num2)
        {
            l2=mid+1;
        }
        else
        {
            r2=mid;
        }
    }
    int ans=l2-l1;
    printf("Number of students with marks within range = %d",ans);
}