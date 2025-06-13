// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

#include <stdio.h>

typedef long long ll;

int main() {
    ll n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    ll max_dolls = k;

  
    ll c = n < m ? n : m;

    // But total dolls can't exceed available bodies
    if (c > k) c = k;

    // Remaining dolls to make
    ll remaining = k - c;

    // Need 2 eyes per remaining doll
    ll eyes_left = n - c;

    ll from_2eye = eyes_left / 2;
    if (from_2eye > remaining) from_2eye = remaining;

    ll result = c + from_2eye;

    printf("%lld\n", result);
    return 0;
}
