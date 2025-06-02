#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    int ascii = (int)c;
    if(ascii>=65 && ascii<97){
        int a = ascii + 32;
        printf("%c", (char)a);
    }else{
        int a = ascii - 32;
        printf("%c", (char)a);
    }
    return 0;
}