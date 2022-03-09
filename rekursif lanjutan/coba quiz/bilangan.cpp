#include <cstdio>
#include <string>

int N = 5;
int arr[5];

bool wow(int i, int t) {
    printf("================\ni saat ini = %d || t saat ini = %d || N saat ini = %d\n", i, t, N);
  if (i >= N) {
    return t == 0;
  } else {
    return wow(i + 1, t - arr[i]) || wow(i + 1, t);
  }
}

int main() {
  arr[0] = 1;
  arr[1] = 3;
  arr[2] = 5;
  arr[3] = 8;
  arr[4] = 11;

  printf("%d\n", wow(0, 2));
  printf("%d\n", wow(0, 6));
  printf("%d\n", wow(0, 9));
}