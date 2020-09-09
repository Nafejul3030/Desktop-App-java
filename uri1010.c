#include <stdio.h>
int main()
{
    int code1,unit1,code2,unit2;
    float tk1,tk2,pay;
    scanf("%d %d %f %d %d %f", &code1, &unit1, &tk1, &code2, &unit2, &tk2);
    pay = (unit1*tk1)+(unit2*tk2);
    printf("VALOR A PAGAR: R$ %.2f\n", pay);
    return 0;
}
