#include <stdio.h>
int main()
{
	int t;
	if(t<=15)
		printf("LANH");
	else if(t>15 && t<=25)
		printf("MAT");
	else if(t>25 && t<=35)
		printf("NONG");
	else
		printf("RAT NONG");
	return 0;
}