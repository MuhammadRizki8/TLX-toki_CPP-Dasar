#include <iostream>
using namespace std;

int n=3;
int arr[4];
bool pernah[4];

void permutasi(int kedalaman){

    //base case
    if(kedalaman>=n){
        for(int i=0; i<n; i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
    //recurrence
    else{
        for(int i=1; i<=n; i++){
            if(!pernah[i]){
                pernah[i]=true;
                arr[kedalaman]=i;
                permutasi(kedalaman+1);
                pernah[i]=false;
            }
        
        }
    }
}

int main(){
    permutasi(0);
}


// #include<iostream>
// using namespace std;

// int n=3, i;
// int catat[4];

// void tulis(int kedalaman){
//     // cout<<"Kedalaman = "<<kedalaman<<endl;
//     // cout<<"kondisi array===========\n";
//     // for(i=0; i<n; i++){
//     //     printf("%d ", catat[i]);
//     // }
//     // printf("\n");

//     //base case
//     if(kedalaman>n){
//         // printf("Hasil = ");
//         for(i=0; i<n; i++){
//             printf("%d", catat[i]);
//         }
//         printf("\n");
//     }
//     else{
//         for(i=1; i<=n; i++){
//             catat[kedalaman]=i;
//             tulis(kedalaman+1);
//         }
//     }

//     // for(i=1; i<=3; i++){
//     //     for(int j=1; j<=3; j++){
//     //         for(int k=1; k<=3; k++){
//     //             printf("%d%d%d\n", i, j, k);
//     //         }
//     //     }
//     // }
// }

// int main(){
//     tulis(0);
// }