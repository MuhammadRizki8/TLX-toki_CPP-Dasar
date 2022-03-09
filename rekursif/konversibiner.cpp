#include <iostream>

using namespace std;

void desbin(int n){
    if(n>0){
        if(n==1){
            printf("%d",n);
        }
        else{
            desbin(n/2);
            printf("%d", n%2);
        }
    }
}

int main(){
    int n;
    cin>>n;
    desbin(n);
}

// string biner(int n){
//     if(n==1){
//         return "1";
//     }
//     else if(n%2==1){
//         return biner(n/2)+"1";
//     }
//     else{
//         return biner(n/2)+"0";
//     }
// }

// int main() {
// 	int N;
// 	cin>>N;
	
// 	cout<<biner(N)<<endl;
// 	return 0;
// }


// void desimalbiner(int x, int n, char biner[8]){
//     int hasil;
//     if(n<8){
//         if(x%2==0){
//             biner[7-n]='0';
//         }
//         else{
//             biner[7-n]='1';
//         }
//         desimalbiner(x/2, n+1, biner);
//     }
//     biner[8]='\0';
// }

// int main(){
//     int x;
//     char biner[8];
//     scanf("%d", &x);
//     desimalbiner(x, 0, biner);
//     printf("%s\n", biner);
// }