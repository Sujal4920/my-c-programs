#include <stdio.h>
void halfpyramid1(int n)
{
  int i, j;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if (j < i + 1)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
void halfpyramid2(int n)
{
  int i, j;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if (j >= (n + 1) - i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
void halfpyramid3(int n)
{
  int i, j;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if (j <= n + 1 - i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
void halfpyramid4(int n)
{
  int i, j;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if (j >= i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
void pyramid(int n)
{
  int i, j;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= (2 * n) - 1; j++)
    {
      if (j >= (n - i) + 1 && j <= (n + i) - 1)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  halfpyramid1(n);
  printf("\n");
  halfpyramid2(n);
  printf("\n");
  halfpyramid3(n);
  printf("\n");
  halfpyramid4(n);
  printf("\n");
  pyramid(n);
  return 0;
}
