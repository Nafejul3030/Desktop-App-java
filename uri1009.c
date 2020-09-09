#include <stdio.h>
int main()
{
    float a, b, d, e;
    char c;
    scanf("%s %f %f", &c, &a, &b);
    d = (b*15)/100;
    e = a+d;
    printf("TOTAL = R$ %.2f\n", e);
    return 0;
}
