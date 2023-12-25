#include<stdio.h>
int main()
{
    int n,i,j,arr[50];
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements:");

    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(arr[i]==arr[n-j])
            {
                printf("\n arr[%d]=arr[%d]",i,n-j);
            }
        }
    }



}