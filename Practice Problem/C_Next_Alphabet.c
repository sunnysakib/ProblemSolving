// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <stdio.h>

int main() {
    char C;

    scanf("%c", &C);

    if(C == 'z'){
        printf("a\n");
    }else{
        int a;
        a = C + 1;
        printf("%c\n",a);
    }
    

    return 0;
}