#include<cstdio>
#include <math.h>

// //kasus bilangan prima
// // int main() {
// //   int N;

// //   scanf("%d", &N);
// //   for (int i = 0; i < N; i++) {
// //     int x;
// //     scanf("%d", &x);

// //     bool prime = true;
// //     if (x <= 1) {
// //       prime = false;
// //     }
// //     else{
// //         if (x==2){
// //             prime = true;
// //         }
// //         else{
// //             for(int j=2; j<x; j++){
// //                 if(x%j==0){
// //                     prime=false;
// //                     break;
// //                 }
// //                 else{
// //                     prime=true;
// //                 }
// //             }
// //         }
        
// //     }

// //     if (prime) {
// //       printf("YA\n");
// //     } else {
// //       printf("BUKAN\n");
// //     }
// //   }
// // }
// int main() {
// 	int a,b,i,j,y;
// 	scanf("%d",&b);
// 	for(j=0;j<b;j++) {
// 		scanf("%d",&a);
// 		for(i=2;i<=trunc(sqrt(a));i++) {
// 			if (a%i == 0) {
// 				y = 1;
// 			}
// 		}
// 		if (y==1 || a == 1) {
// 			y = 0;
// 			printf("BUKAN\n");
// 		}
// 		else {
// 			printf("YA\n");
// 		}
// 	}
// }


//agak prima
int main() {
    int n, x, i, j, count, tes, bts;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x);
        count=0;
        tes=3;
        bts=trunc(x/2);
        if(x%2==0 && x!=2 || x==1){
            count++;
        }
        while (tes<=bts){
            if(x%tes==0){
                count++;
                if(count>2){
                    break;
                }
            }
            tes++;
        }
        if(count>2){
            printf("BUKAN\n");
        }
        else{
            printf("YA\n");
        }
    }
}

