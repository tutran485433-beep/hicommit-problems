#include <stdio.h>
int main()
{
	int t;
	printf("\nnhap nhiet do hom nay:");
	scanf("%d",&t);
	if(t<=15)
		printf("lanh");
	else if(t>15 && t<=25)
		printf("mat");
	else if(t>25 && t<=35)
		printf("nong");
	else
		printf("rat nong");
	return 0;
}