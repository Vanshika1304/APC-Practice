#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter array 1 size: ");
    scanf("%d",&m);
    printf("Enter array 2 size: ");
    scanf("%d",&n);
    int i=0,j=0,k=0;
    int a[m],b[n];
    int w;
    w=m>n?n:m;
    int res[w];
    printf("Enter elements in array1:\n");
    for(int x=0;x<m;x++)
    {
        scanf("%d",&a[x]);
    }
    printf("Enter elements in array2:\n");
    for(int x=0;x<n;x++)
    {
        scanf("%d",&b[x]);
    }
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            res[k]=a[i];
            i++;
            j++;
            k++;
        }
    }
    printf("Intersected array: ");
    for(int x=0;x<k;x++)
    {
        printf("%d ",res[x]);
    }
}