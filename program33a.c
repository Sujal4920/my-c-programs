#include <stdio.h>
int main()
{
    int arr[50],i,n,k;
    printf("Size of array:");
    scanf("%d",&n);
    printf("Enter %d elements in an array:\n",n);
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
    for(i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            printf("Element %d found at position %d\n",k,i);
        }
    }
  //   printf("Not found");  
           
   
    return 0;
}