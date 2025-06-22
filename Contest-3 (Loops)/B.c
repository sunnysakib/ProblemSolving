#include <stdio.h>
typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);

        if(n>m) {
            printf("%d\n",n-m);
        }
        else{
            printf("%d\n",0);
        } 
    }

    return 0;
}