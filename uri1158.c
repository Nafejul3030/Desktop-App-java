#include <stdio.h>
int main(){
    int i,j,n,x,y,k;
    scanf("%d",&n);
    for(i=0; i<n; i+=1){
        k=0;
        scanf("%d%d",&x,&y);
        if(x%2==0){
            x+=1;
        }
        for(j=0; j<y; j+=1){
            k+=x;
            x+=2;
        }
        printf("%d\n",k);
    }
    return 0;
}
