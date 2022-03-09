#include <iostream>
using namespace std;

int faktorial_genap(int n){
    int hasil;
    if(n==1){
        return 1;
    }
    else{
        if(n%2==0){
            return hasil=n/2*faktorial_genap(n-1);
        }
        return hasil=n*faktorial_genap(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<faktorial_genap(n);

}