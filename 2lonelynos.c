#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    int *a=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    for(int i=0;i<n-1;i++)
    {
        x=a[i]^a[i+1];
    }
    int c=0;
    while(x&1==0)
    {
        x=x>>1;
        c++;
    }
    int s;
    s=1<<c;
    int t1=0,t2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]&s==0)
        {
            t1=t1^a[i];
        }
        else
        {
            t2=t2^a[i];
        }
    }
    printf("Two Lonely numbers are %d and %d",t1,t2);
}