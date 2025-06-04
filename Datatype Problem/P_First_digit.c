#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);

    if(a<999){
        int result = a/100;
        if(result%2 == 0){
            printf("EVEN");
        }else{
            printf("ODD");
        }
    }else{
        int result = a/1000;
        if(result%2 == 0){
            printf("EVEN");
        }else{
            printf("ODD");
        }
    }
    return 0;
}