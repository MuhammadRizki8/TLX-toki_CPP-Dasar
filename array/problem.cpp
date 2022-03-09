// #include<cstdio>

// //kasus kebalik
// // int main(){
// //     int n=0, arr[1000];

// //     while(scanf("%d", &arr[n]) != EOF){
// //         n++;
// //         // continue;
// //     }

// //     for(int i=n-1; i>=0; i--){
// //         printf("%d\n", arr[i], i);
// //     }
// // }

// //kasus cari modus terbesar versi sendiri
// // int main(){
// //     int n;
// //     scanf("%d", &n);
// //     int arr[n];
// //     for(int i=0; i<n; i++){
// //         scanf("%d", &arr[i]);
// //     }

// //     int maxmod=0;
// //     int count=0;
// //     int tampil=0;
// //     for(int i=0; i<n; i++){
// //         for(int j=0; j<n; j++){
// //             if(arr[i]==arr[j]){
// //                 count++;
// //             }
// //             if(maxmod<count && tampil<arr[i]){
// //                 tampil=arr[i];
// //             }
// //         }
// //         count=0;
// //     }
// //     printf("%d", tampil);
// // }

// //kasus moduss terbesar versi nyontek
// // long int arr[1000], i, j, count, n, modus, l;
// // int main(){

// //     scanf("%d", &n);
// //     for(i=0; i<n; i++){
// //         scanf("%d", &arr[i]);
// //     }

// //     modus=arr[0], l=1;
// //     for(i=0; i<n; i++){
// //         if(arr[i]>0){
// //             count=1;
// //             for(j=i+1 ;j<n; j++){
// //                 if(arr[i]==arr[j]){
// //                     arr[j]=0;
// //                     count++;
// //                 }
// //             }
// //             if(count>1){
// //                 l=count;
// //                 modus=arr[i];
// //             }
// //             else{
// //                 if(count==l){
// //                     if(arr[i]>modus){
// //                         l=count; 
// //                         modus=arr[i];
// //                     }
// //                 }
// //             }
// //         }
// //     }
// //     printf("%d", modus);
// // }


//kasus modus terbesar lagi
// #include <iostream>

// using namespace std;

// int main(){

//  int a;

//  cin>>a;

//  int jum[a], arr[a];

//  for(int c=0; c<a; c++){

//   cin>>arr[c];

//  }

//  for(int x=0; x<a; x++){

//   jum[x]=0;

//   for(int d=0; d<a; d++){

//    if(arr[x]==arr[d])jum[x]++;

//   }

//  }

//  int temp=0, hasil=0;

//  for(int z=0; z<a; z++){

//   if(jum[z]>=temp){

//    temp=jum[z];

//    if(arr[z]>=hasil){

//    hasil=arr[z];}

//   }

//  }

//  cout<<hasil<<endl;

//  return 0;

// }



//rotasi matrix
// int main(){
//     int b, k, i, j;
//     scanf("%d %d", &b, &k);
//     int matrix[b][k];
//     for(i=0; i<b; i++){
//         for(j=0; j<k; j++){
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     int hasil[k][b];
//     for(i=0; i<k; i++){
//         for(j=0; j<b; j++){
//             hasil[i][j]=matrix[b-1-j][i];
//         }
//     }

//     for(i=0; i<k; i++){
//         for(j=0; j<b; j++){
//             printf("%d ", hasil[i][j]);
//         }
//         printf("\n");
//     }
// }

//perkalian matrix
// int main(){
//     int n, m, p, i, j, k;
//     scanf("%d %d %d", &n, &m, &p);

//     int matrix1[n][m], matrix2[m][p];
//     for(i=0; i<n; i++){
//         for(j=0; j<m; j++){
//             scanf("%d", &matrix1[i][j]);
//         }
//     }
//     for(i=0; i<m; i++){
//         for(j=0; j<p; j++){
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     int hasil[n][p];
//     for(i=0; i<n; i++){
//         for(j=0; j<p; j++){
//             hasil[i][j]=0;
//             for(k=0; k<m; k++){
//                 hasil[i][j]+=matrix1[i][k]*matrix2[k][j];
//             }
//         }
//     }

//     for(i=0; i<n; i++){
//         for(j=0; j<p; j++){
//             printf("%d ", hasil[i][j]);
//         }
//         printf("\n");
//     }
// }





//
// //MODUS TERBESAR FIXXX BENAR
// #include<bits/stdc++.h>
// using namespace std;

// int n, m, x, muncul[100];

// int main(){
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         muncul[x]++;
//     }
//     for(int i=1; i<=100; i++){
//         if(muncul[i]>=muncul[m]){
//             m=i;
//         }
//     }
//     cout<<m<<endl;
// }