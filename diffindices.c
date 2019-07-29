#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter value: ");
    scanf("%d",&k);
    int l=0,r=n-1;
    int w=0;
    while(l<r)
    {
        if(a[l]+k==a[r])
        {
            w++;
            break;
        }
        else if(a[l]+k<a[r])
        {
            r--;
        }
        else if(a[l]+k>a[r])
        {
            l++;
        }
    }
    if(w==0)
    {
        printf("No indices");
    }
    else
    {
        printf("(%d, %d)\n",l,r);
    }
}