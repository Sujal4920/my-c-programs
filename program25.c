//program to find max element in an array
#include <stdio.h>
int main()
{
  int arr[100], n, max;
  printf("Enter how many numbers you want to enter in an array: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("The entered values are:\n ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  } 
  printf("\n"); 
  max = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  printf("The max number in array is:%d",max);
  return 0;
}