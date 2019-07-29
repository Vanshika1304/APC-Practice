#include<stdio.h>
#include<stdlib.h>
struct interval
{
    int s;
    int e;
};
int cmp(const void *a,const void *b)
{
    return ((((struct interval*)a)->s)-(((struct interval*)b)->s));
}
int max(int x,int y)
{
    return(x>y?x:y);
}
void merge(struct interval *arr, int n, struct interval *res, int *size)
{
    int count=0;
    count++;
    res = (struct interval *)realloc(res,sizeof(struct interval)*count);
    *size+=1;
    
    res[count-1].s=arr[0].s;
    res[count-1].e=arr[0].e;
    for(int i=0;i<n;i++)
    {
        if(arr[i].s<=res[count-1].e)
        {
            res[count-1].e=max(res[count-1].e,arr[i].e);
        }
        else
        {
            count++;
            res=(struct interval *)realloc(res,sizeof(struct interval)*count);
            *size+=1;
            res[count-1].s=arr[i].s;
            res[count-1].e=arr[i].e;
        }
        
    }
}
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    struct interval arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&arr[i].s,&arr[i].e);
    }
    qsort((void*)arr,n,sizeof(arr[0]),cmp);
    int size = 0;
    struct interval *result;
    result = (struct interval *) malloc(sizeof(struct interval)*size);
    merge(arr,n,result,&size);
    for(int i=0;i<size;i++)
    {
        printf("%d %d\n",result[i].s,result[i].e);
    }
}
