#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of journeys:");
    scanf("%d", &n);
    int a[n],d[n];
    int c=0;
    printf("Enter departure times: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
     printf("Enter arrival times: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &d[i]);
    }
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        int y=d[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>=x&&a[j]<y)
            {
                printf("Not Possible");
                c++;
                break;
            }
        }
    }
    if(c==0)
    {
        printf("Possible");
    }
}
