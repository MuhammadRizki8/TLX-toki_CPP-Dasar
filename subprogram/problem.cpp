/* TUKAR POSISI
#include <cstdio>

int N;
int Q;
int ar[2][1001];

void swap(int &a, int &b) {
    int temp=a;
    a=b;
    b=temp;
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &ar[i][j]);
    }
  }

  scanf("%d", &Q);
  for (int i = 0; i < Q; i++) {
    char buff1[5], buff2[5];
    int x, y;
    scanf("%s %d %s %d", buff1, &x, buff2, &y);

    int p = buff1[0] - 'A';
    int q = buff2[0] - 'A';
    x--;
    y--;
    swap(ar[p][x], ar[q][y]);
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d", ar[i][j]);
      if (j+1 < N) {
        printf(" ");
      }
    }
    printf("\n");
  }
}
*/


/*BALIK BILANGAN REVERSE
#include <cstdio>

int reverse(int x) {
  int temp = x;
  int hasil = 0;

  while (temp > 0) {
    hasil = (hasil * 10) + (temp % 10);
    temp = temp / 10;
  }

  return hasil;
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", reverse(reverse(a) + reverse(b)));
}
*/

/*FAKTORISASI PRIMA
#include<cstdio>
bool cekPrima(int x){
    int i=2;
    bool prime=true;

    if(x==1){
        prime=false;
    }
    else if(x==2){
        prime=true;
    }
    else if(x>2 && x%2==0){
        prime=false;
    }
    else{
        while(i*i<=x){
            if(x%i==0){
                prime=false;
                break;
            }
            i++;
        }
    }
    return prime;
}

int main(){
    int n, i, pangkat, faktorke=1, m;
    scanf("%d", &n);
    i=2;
    while(i<=n){
        pangkat=0;
        if(cekPrima(i)){
            while(n%i==0){
                pangkat++;
                n/=i;
            }
        }

        if(faktorke==1) {
			if(pangkat==1)
				printf("%d", i);
			else if(pangkat>1)
				printf("%d^%d", i, pangkat);
			else faktorke--;
		} else {
			if(pangkat==1)
				printf(" x %d", i);
			else if(pangkat>1)
				printf(" x %d^%d", i, pangkat);
			else faktorke--;		
		}
		i++;
		faktorke++;
    }
    printf("\n");
}
*/


/*fungsi komposisi
#include<cstdio>

int mutlak(int bahan){
    if(bahan<0){
        bahan*=-1;
    }
    return bahan;
}

int fungsi(int a, int b, int k, int x){
    int hasil=0;
    int i;
    for(i=0; i<k; i++){
        hasil=mutlak(a*x+b);
        // printf("hasil sekarang = %d\n", hasil);
        x=hasil;
    }
    return hasil;
}

int main(){
    int A, B, n, x;
    scanf("%d %d %d %d", &A, &B, &n, &x);
    printf("%d", fungsi(A, B, n, x));
}
*/


#include <iostream>

using namespace std;

int abs(int a) {
	if (a>=0)
		return a;
	else return (a*(-1));
}

int pow(int a, int b) {
	int n=a;
	while (b>1) {
		n*=a;
		b--;
 }
	return n;
}

int kedekatan(int xj, int xi, int yj, int yi, int d) {
	return (pow(abs(xj-xi), d)+pow(abs(yj-yi), d));
}

int main() {
	int n,d,i,j,hasil,terbesar=0,terkecil=0;
	int param[1001][3];
	cin>>n>>d;
	
	for(i=0; i<n;i++) {
		for(j=0; j<2; j++) {
			cin>>param[i][j];
		}
	}
	
	for(i=0; i<n;i++) {
		for(j=i+1; j<n; j++) {
			hasil=kedekatan(param[j][0],param[i][0],param[j][1],param[i][1], d);
			if((terkecil==0) && (terbesar==0)){
				terbesar=hasil;
				terkecil=hasil;
			}
			if(hasil>terbesar)
				terbesar=hasil;
			if(hasil<terkecil)
				terkecil=hasil;
		}
	}
	cout<<terkecil<<" "<<terbesar<<endl;
	return 0;
}