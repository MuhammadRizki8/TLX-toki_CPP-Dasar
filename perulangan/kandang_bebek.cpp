#include<cstdio>


// kasus kandang bebek
// int main(){
//     int n, x, hasil=0;
//     scanf("%d", &n);
//     for(int i=0; i<n; i++){
//         scanf("%d", &x);
//         hasil+=x;
//     }
//     printf("%d", hasil);
// }

// kasus burung beo
// int main(){
//     char masukan[101];
//     while (scanf("%s", masukan) != EOF){
//         printf("%s\n", masukan);
//     }

// nambah-nambah
// int main(){
//     int masukan, hasil=0;
//     while (scanf("%d", &masukan) != EOF){
//         hasil+=masukan;
//     }
//     printf("%d\n", hasil);
// }

// dua pangkat
// int main(){
//     int x;
//     scanf("%d", &x);
//     while(x%2==0){
//         x/=2;
//     }
//     if(x==1){
//         printf("ya");
//     }
//     else{
//         printf("bukan");
//     }
// }

// cari faktor
// int main(){
//     int x;
//     scanf("%d", &x);
//     for(int i=x; i>=1; i--){
//         if(x%i==0){
//             printf("%d\n", i);
//         }
//     }
// }

// //statistika sederhana
// int main(){
//     int n, x, max=-99999, min=99999;
//     scanf("%d", &n);
//     for(int i=0; i<n; i++){
//         scanf("%d", &x);
//         if(x>max){
//             max=x;
//         }
//         if(x<min){
//             min=x;
//         }
//     }
//     printf("%d %d", max, min);
// }

//pola 
int main(){
    int n, x, nambah;
    scanf("%d %d", &n, &x);
    nambah=x;
    for(int i=1; i<=n; i++){
        if(i==x){
            printf("* ");
            x+=nambah;
        }
        else{
            printf("%d ", i);
        }
    }
}