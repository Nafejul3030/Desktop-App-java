#include <stdio.h>
int main()
{
    int x, y;
    float z, a = 4.00, b = 4.50, c = 5.00, d = 2.00, e = 1.50;
    scanf("%d %d", &x, &y);
    if(x == 1)
    {
        printf("Total: R$ %.2f\n", y*a);
    }
    else if(x == 2)
    {
        printf("Total: R$ %.2f\n", y*b);
    }
    else if(x == 3)
    {
        printf("Total: R$ %.2f\n", y*c);
    }
    else if(x == 4)
    {
        printf("Total: R$ %.2f\n", y*d);
    }
    else if(x == 5)
    {
        printf("Total: R$ %.2f\n", y*e);
    }

    return 0;
}
