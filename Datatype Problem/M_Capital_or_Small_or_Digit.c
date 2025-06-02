#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    int value = (int)c;

    if(value >=48 && value<=57){
    printf("IS DIGIT\n");
    }else if(value >=97 && value<=122){
    printf("ALPHA\n");
    printf("IS SMALL\n");
    }else{
         printf("ALPHA\n");
    printf("IS CAPITAL\n");
    }
    
    return 0;
}