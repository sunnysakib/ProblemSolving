// Problem: https://vjudge.net/contest/723815#problem/N

#include <stdio.h>

int main() {
	// your code goes here
     int t;
  scanf("%d", &t);

      while(t--){
       int x,n,a;
       scanf("%d%d",&x, &n);

       if(x*100 < n){
        a = n - (x*100);
        if(a%100 == 0){
            printf("%d\n", a/100);
        }else{
             printf("%d\n", (a/100)+1);
        }

    }else{
           printf("0\n");
       }
       
    }
    return 0;
}



