#include <stdio.h>
int main()
{
	int n;
	printf("\nnhap n= ");
	scanf("%d",&n);
	if( n ==0 ||n %2==0)
		printf("\n%d la so chan",n);
	else
			printf("\n%d la so le",n);
	return 0;
}