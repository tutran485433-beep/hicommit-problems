#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	if(t<=15)
		printf("lanh");
	else if(t>15 && t<=25)
		printf("mat");
	else if(t>25 && t<=35)
		printf("nong");
	else
		printf("rat_nong");
	return 0;
}