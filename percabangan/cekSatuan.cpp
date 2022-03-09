#include<cstdio>

int main(){
    int x;
    scanf("%d", &x);
    if(x>=10000){
        printf("puluhribuan");
    }
    else if(x>=1000){
        printf("ribuan");
    }
    else if(x>=100){
        printf("ratusan");
    }
    else if(x>=10){
        printf("puluhan");
    }
    else if(x>=1){
        printf("satuan");
    }
    else{
        printf("Tidak valid!");
    }
}