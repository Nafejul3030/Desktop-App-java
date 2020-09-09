#include<cstdio>
#include<queue>
#include<iostream>
#include<stack>
#include<algorithm>
#include<cstring>
#include<string>
#include<cstdlib>
using namespace std;
 
 
int main()
{
        char ara[10000];
        int tc,c;
 
        scanf("%d",&tc);
 
        while(tc--){
            scanf("%s",ara);
              c=0;
 
 
        for(int i=0;i<strlen(ara);i++){
                if(ara[i]== '<'){
                    for(int j=i;j<strlen(ara);j++){
                            if(ara[j] =='>' ){
                                    c++;
                                     ara[j]='0';
                                 //   cout<<ara[j]<<endl;
                                    break;
                            }
                    }
                }
 
        } // end parent for loop
 
            cout<<c<<endl;
 
        memset(ara,'0',sizeof ara);
 
        } // end while
 
 
    return 0;
}
