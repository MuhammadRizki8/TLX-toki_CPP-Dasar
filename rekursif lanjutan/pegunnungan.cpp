#include <iostream>
using namespace std;

void draw(int n){
    // printf("Kondisi: n=%d\n", n);
    if(n>0){
        draw(n-1);
        for(int i=0; i<n; i++){
            // printf("ini n=%d", n);
            // printf("===========");
            cout<<"*";
        }
        cout<<endl;
        draw(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    draw(n);
}