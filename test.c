// #include <stdio.h>
// typedef long long ll;

// int main() {
//     int t;
//     scanf("%d", &t);

//     while(t--){
//         int n;
//         scanf("%d",&n);

//         printf("%d\n",n-10);
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
	// your code goes here
   long long int a,b, k;
   scanf("%lld%lld%lld", &a,&b,&k);

   if(a >= k){
    printf("%lld %lld\n", a-k, b);
}else if(a+b >= k){
       printf("0 %lld\n", a+b - k);
    }else{
       printf("0 0\n");
   }

    return 0;

}

