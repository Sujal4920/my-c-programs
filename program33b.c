//Binary search
#include <stdio.h>
int main()
{
    int arr[50],i,n,k,low,mid,high;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter %d sorted elements in array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The entered elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter element to be searched:");
    scanf("%d",&k);
    low=0;
    high=n-1;
    while(low<=high)
    {
      mid=(low+high)/2;
       if(k==arr[mid])
       {
           printf("Element %d found at position %d\n",k,mid);
       }
       if(k<arr[mid])
       {
           high=mid-1;
       }
       else
       {
           low=mid+1;
       }
    }
    return 0;
}  