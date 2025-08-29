// Problem: https://www.codechef.com/problems/HATTRICK?tab=statement

#include <stdio.h>

int main() {
	// your code goes here
     int t;
  scanf("%d", &t);

      while(t--){
        char a,b,c,d,e,f;
        scanf(" %c %c %c %c %c %c",&a,&b,&c,&d,&e,&f);

        if(a == 'W' && b == 'W' && c == 'W' ) printf("yes\n");
        else if(b == 'W' && c == 'W' && d == 'W' ) printf("yes\n");
        else if(c == 'W' && d == 'W' && e == 'W' ) printf("yes\n");
        else if(d == 'W' && e == 'W' && f == 'W' ) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}



