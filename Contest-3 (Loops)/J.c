#include <stdio.h>
typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, x;
        scanf("%d%d",&n,&x);
        if(n <= x){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }

    return 0;
}