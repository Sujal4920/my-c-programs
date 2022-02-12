#include <stdio.h>
#include <math.h>
int main()
{
    int a = 1, b, b1, b2, c, area, pm, d, length, bredth;
    printf("Enter area of rectangle: ");
    scanf("%d", &area);
    printf("enter perimeter of rectangle: ");
    scanf("%d", &pm);
    b = pm / 2;
    c = area;
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        b1 = (-(-b) + sqrt(d)) / (2 * a);
        b2 = (-(-b) - sqrt(d)) / (2 * a);
        if (b1 > b2)
        {
            length = b1;
            printf("the length is %d", length);
        }
        if (b2 > b1)
        {
            length = b2;
            printf("the length is %d", length);
        }
    }

    bredth = c / length;
    printf("\n");
    printf("The bredth is %d", bredth);
    return 0;
}
