
#include<stdio.h>

int arr[20];
int main()
{
    int i,n,imin,j,temp;
    printf("Enter array Size: ");
    scanf("%d",&n);
    printf("Enter array value: ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-2; i++)
    {
        imin=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[imin])
            {
                imin=j;


            }
        }
        temp=arr[i];
        arr[i]=arr[imin];
        arr[imin]=temp;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
