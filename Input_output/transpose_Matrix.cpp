#include<cstdio>

int main(){
    int angka[9];
    int i;
    for(i=0; i<9; i++){
        scanf("%d", &angka[i]);
    }
    for(i=0; i<3; i++){
        printf("%d %d %d", angka[i], angka[i+3], angka[i+6]);
        if(i!=9-1){
            printf("\n");
        }
    }
}