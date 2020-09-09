#include <iostream>

using namespace std;

int main() {

    int n,x;

    cin >> n;

    for(int i=1; i<=n; i+=1) {

        if(n%i==0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
