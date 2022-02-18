//program to find length and breadth using area and perimeter
#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4, area, peri, length, breadth;
    printf("Enter area of rectangle: ");
    scanf("%d", &area);
    printf("Enter perimeter of rectangle: ");
    scanf("%d", &peri);
    length = (peri + sqrt(peri * peri - 4 * a * area)) / a;
    printf("the length is %d\n", length);
    printf("The breadth is %d", area / length);
    return 0;
}
