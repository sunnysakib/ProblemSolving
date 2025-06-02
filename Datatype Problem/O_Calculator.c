// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    
    if(c == '+'){
        printf("%d", a+b);
    }else if(c=='-'){
        printf("%d", a-b);
    }else if(c=='*'){
        printf("%d", a*b);
    }else{
        printf("%d", a/b);
    }
    return 0;
}