#include <bits/stdc++.h>
using namespace std;

int n, m, x, muncul[1005];

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        muncul[x]++;
    }
    for(int i=1; i<=1000; i++){
        if(muncul[i]>=muncul[m]){
            m=i;
        }
    }
    cout<<m<<endl;
}