#include<stdio.h>
int main()
{
    int arr[100],n,i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            k=i;
        }
    }
    printf("%d",k);
}