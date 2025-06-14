#include <stdio.h>
typedef long long ll;

int main() {
    ll N;

    scanf("%lld", &N);
    if(N <= 1000-1) printf("%lld", N);
    else if( N >= 1000 && N <= 10000-1) printf("%lld", (N/10)*10);
    else if( N >= 10000 && N <= 100000-1) printf("%lld", (N/10)*10);
    
    

    return 0;
}