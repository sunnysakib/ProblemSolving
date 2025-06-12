#include <stdio.h>
#include <string.h>

int main() {
    char s1,s2,t1,t2;
    scanf("%c%c%c%c", &s1,&s2,&t1,&t2);

    char s1s2[2];
    char t1t2[2];
   
    s1s2[0] = s1; 
    s1s2[1] = s2; 
    t1t2[0] = t1; 
    t1t2[1] = t2; 

    if(strcmp(s1s2, "AB") == 0){
        printf("short %s", s1s2);
    }
    

  
    return 0;
}