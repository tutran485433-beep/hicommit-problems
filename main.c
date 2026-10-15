#include <stdio.h>
int main()
{
	int  distance ,cost=0,value_order;
		scanf("%d %d",&value_order, &distance);
		if(value_order==0 || distance==0)
			printf("invaild");
		else if(value_order>=50000 && distance <15)
			printf("\nmien phi giao hang");
		else if( distance >0 || distance <=5)
			cost=15000;
		else if( distance >5 || distance <=15)
			cost=25000;
		else if( distance >25)
			cost=40000;
	if(cost>0)
		printf("%d",cost);
	return 0;
}