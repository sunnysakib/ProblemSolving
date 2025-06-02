#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    printf("floor %d / %d = %d\n", a,b,a/b);
    printf("ceil %d / %d = %d\n", a,b,(a+b-1)/b);
    printf("round %d / %d = %d\n", a,b,(a+b/2)/b);
    return 0;
}