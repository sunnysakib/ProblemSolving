#include <stdio.h>

int main() {
    int a,b,c,s;
    scanf("%d%d%d", &a,&b,&c);

    int f = a;
    if(b>=f){
        f=b;
        s=a;
    }
    if(c>=f){
        f=c;
        s=b;
    }
    int t = a;
    if(b<=t){
        t=b;
    }
    if(c<=t){
        t=c;
    }

    printf("%d %d %d\n",t,s,f);
    return 0;
}