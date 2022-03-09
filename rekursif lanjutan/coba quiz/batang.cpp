#include<iostream>
using namespace std;

void batang(int x) {
    cout<<"================\nX saat ini = "<<x<<endl;
    if (x == 0) {
        printf("daun\n");
    } 
    else {
        batang(x - 1);
        batang(x - 1);
    }
}

int main(){
    int n;
    cin>>n;
    batang(n);
    return 0;
}