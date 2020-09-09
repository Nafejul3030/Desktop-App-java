#include<stdio.h>
int main(){
	int num=0,i=0;
	scanf("%d",&num);
	i=1;
	while(i<=num){
		if(i%2!=0){
			printf("%d\n",i);
		}
		i+=1;
	}
	return 0;
}
