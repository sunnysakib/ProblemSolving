#include <stdio.h>
typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d",&n);
        if(n>24) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}