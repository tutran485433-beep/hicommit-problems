#include <stdio.h>
int main()
{
	int a,b,c,i,max;
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if(b>a && b>c)
		max=b;
	else if(c>b && c>a)
		max=c;
	else if (a>b && a>c)
		max=a;
	printf("\n%d",max);
	return 0;
}