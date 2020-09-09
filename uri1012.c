#include <stdio.h>
int main()
{
    float a,b,c,tri,cir,tpi,quar,rec;
    scanf("%f%f%f",&a,&b,&c);
    tri=0.5*(a*c);
    cir=3.14159*(c*c);
    tpi=0.5*(a+b)*c;
    quar=(b*b);
    rec=(a*b);
    printf("TRIANGULO: %.3f\n",tri);
    printf("CIRCULO: %.3f\n",cir);
    printf("TRAPEZIO: %.3f\n",tpi);
    printf("QUADRADO: %.3f\n",quar);
    printf("RETANGULO: %.3f\n",rec);
    return 0;
}
