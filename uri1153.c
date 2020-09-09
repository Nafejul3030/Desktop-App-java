#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    scanf("%d", &n);

    if (n >= 0) {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("%llu\n", fact);
    }

    return 0;
}
