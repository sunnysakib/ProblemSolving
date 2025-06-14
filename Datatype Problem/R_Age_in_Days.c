#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int years = N / 365;
    int remaining = N % 365;

    int months = remaining / 30;
    int days = remaining % 30;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}
