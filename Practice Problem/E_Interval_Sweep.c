#include <stdio.h>

int main() {
    int a,b;

    scanf("%d%d", &a,&b);

    if(a == 0 && b == 0) printf("NO\n");
    else if(a==b || a-b==1 || b-a==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    return 0;
}