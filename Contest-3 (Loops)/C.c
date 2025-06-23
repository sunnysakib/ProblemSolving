#include <stdio.h>
typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d\n",m-n);
    }

    return 0;
}