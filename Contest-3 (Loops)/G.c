#include <stdio.h>
typedef long long ll;

int main() {
    int t,a, b = 0;
    scanf("%d%d", &t,&a);

    while(t--){
        int n;
        scanf("%d",&n);
        if(n<=a) b = b + n;
    }

    printf("%d\n",b);

    return 0;
}