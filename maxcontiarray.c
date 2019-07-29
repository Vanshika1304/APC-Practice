#include<stdio.h>
int main()
{
    int l=0,r=0,left,right,max=0;
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number of flips allowed: ");
    int M;
    scanf("%d",&M);
    int num=M;
    while(r<n)
    {
        if(arr[r]==1)
        {
            r++;
        }
        else if(arr[r]==0 && num)
        {
            r++;
            num--;
        }
        else if(arr[r]==0)
        {
            while(arr[l]!=0)
            {
                l++;
            }
            l++;
            if (num<M)
            {
                num++;
            }
            if(r-l>max)
            {
                max=r-l;
                right=r;
                left=l;
            }
            if(left>right)
            {
                right=left;
            }
        }   
    }
    printf("Window size from index %d to %d is max=%d",left,right,max);
}