#include<stdio.h>
int minele(int a,int b,int c)
{
    return a < b ? (a < c ? a : c) : ( b < c ? b : c );
}
int maxele(int a,int b,int c)
{
    return a > b ? (a > c ? a : c) : ( b > c ? b : c );
}
int main()
{
    int n1,n2,n3;
    int *a,*b,*c;
    printf("Enter array1 size: ");
    scanf("%d",&n1);
    a=(int*)malloc(sizeof(int)*n1);
    printf("Enter elements in array1:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter array2 size: ");
    scanf("%d",&n2);
    b=(int*)malloc(sizeof(int)*n2);
    printf("Enter elements in array2:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter array3 size: ");
    scanf("%d",&n3);
    c=(int*)malloc(sizeof(int)*n3);
    printf("Enter elements in array3:\n");
    for(int i=0;i<n3;i++)
    {
        scanf("%d",&c[i]);
    }
    int i=0,j=0,k=0,r=999999;
    while(i<n1 && j<n2 && k<n3)
    {
        int min=minele(a[i],b[j],c[k]);
        int max=maxele(a[i],b[j],c[k]);
        if((max-min)<r)
        {
            r=max-min;
        }
        if(min==a[i])
        {
            i++;
        }
        else if(min==b[j])
        {
            j++;
        }
        else if(min==c[k])
        {
            k++;
        }
    }
    printf("Minimized sum is %d at index %d of 1st array, %d index of 2nd array, %d index of 3rd array.",r,i,j,k);
}