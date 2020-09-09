#include <stdio.h>

int main()
{
    int N, i, X, ci = 0, co = 0;

    scanf("%d", &N);

    if(N < 10000)
    {
        for(i = 1; i <= N; i++)
        {
            scanf("%d", &X);
            if(X >= 10 && X <= 20)
            {
                ci = ci + 1;
            }
            else
            {
                co = co + 1;
            }
        }
    }

    printf("%d in\n", ci);
    printf("%d out\n", co);

    return 0;

}
