#include <stdio.h>
int main()
{
    int a,b=0,c;
    int x,y=0;
    for(x=0; x<5; x++)
    {
        scanf("%d", &a);
        if(a%2==0)
        {
            y++;
        }
    }
    printf ("%d valores pares\n",y);
    return 0;
}
