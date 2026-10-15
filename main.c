#include <stdio.h>

int main() {
  int n;
  printf("\nnhap n=");
  scanf("%d".&n);
  if(n==0 or n%2==0)
    printf("%d la so chan",n);
  else
    printf("%d la so le",n);
  return 0;
}