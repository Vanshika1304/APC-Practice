#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=a[0],max=a[0];
    for(int i=1;i<n;i++)
    {
        if(sum+a[i]>a[i])
        {
            sum=sum+a[i];
        }
        else
        {
            sum=a[i];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("Maximum Contiguous Sum is %d", max);
}    