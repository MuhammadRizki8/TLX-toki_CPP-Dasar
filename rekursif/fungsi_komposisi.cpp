#include<iostream>
#include<cmath>
using namespace std;

int komposisi(int a, int b, int k,  int x){
    int hasil;
    if(k==0){
        return x;
    }
    else{
        return abs(a*komposisi(a, b, k-1, x) + b);
    }
}

int main(){
    int a, b, k, x;
    cin>>a>>b>>k>>x;
    cout<<komposisi(a, b, k, x);
}