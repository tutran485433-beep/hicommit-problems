#include <stdio.h>
int main()
{
	int n;
	printf("\nnhap n= ");//kiểm tra
	scanf("%d",&n);
	if( n ==0 ||n %2==0)
		printf("CHAN");
	else
			printf("LE");
	return 0;
}