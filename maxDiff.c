#include<stdio.h>
#include<stdlib.h>
struct elem
{
    int val;
    int index;
};
int cmp(const void *a,const void *b)
{
    return ((((struct elem*)a)->val)-(((struct elem*)b)->val));
}
int main() 
{
   int n;
   printf("Enter array size: ");
   scanf("%d",&n);
   struct elem arr[n];
   int a[n];
   printf("Enter array elements: ");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       arr[i].val=a[i];
       arr[i].index=i;
   }
   qsort((void*)arr,n,sizeof(arr[0]),cmp);
   int max=0,min=arr[0].index;
   for(int i=1;i<n;i++)
   {
       if((arr[i].index-min)>max)
       {
           max=(arr[i].index)-min;

       }
       min=arr[i].index<min?arr[i].index:min;
   }
   printf("%d",max);
}