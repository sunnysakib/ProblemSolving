#include <stdio.h>
typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, x;
        scanf("%d%d",&n,&x);
        if(n-x <= 0){
            printf("%d\n", 0);
        }else{
            printf("%d\n",n-x);
        }
    }

    return 0;
}