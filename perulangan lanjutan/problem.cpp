#include<cstdio>

//kasus cetak bilangan
// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         if(i==42){
//             printf("ERROR");
//             break;
//         }
//         else if(i%10==0){
//             continue;
//         }
//         else{
//             printf("%d\n", i);
//         }
//     }
// }

//pola segitiga
// int main(){
//     int n, i, j;
//     scanf("%d", &n);
//     for(i=0; i<n; i++){
//         for(j=n-i; j>1; j--){
//             printf(" ");
//         }
//         for(j=0; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//segitiga angka
int main(){
    int n, tampil=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d", tampil);
            tampil++;
            if(tampil==10){
                tampil=0;
            }
        }
        printf("\n");
    }
}