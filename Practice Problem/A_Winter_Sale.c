// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <stdio.h>

int main() {
    int x; 
    float p;
    scanf("%d %f", &x, &p);
    
    printf("%.2f\n", p/(1-(x/100.0)));
    return 0;
}