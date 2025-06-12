// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <stdio.h>

int main() {
    double x,p;
    scanf("%lf %lf", &x, &p);

    printf("%.2lf\n", p/(1-(x/100)));
    return 0;
}