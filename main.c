#include <stdio.h>
int main()
{
	int distance,cost=0,order_value;
		scanf("%d %d", &distance, &order_value);
		if(order_value<0 || distance<=0)
        	printf("INVALID");
		else {
          if(order_value>=500000 && distance <=15)
        		cost=0;
        	else if(distance>0 && distance <=5)
    			cost=15000;
    		else if(distance>5 && distance <=15)
    			cost=25000;
    		else
    			cost=40000;
    		printf("%d",cost);
        }
            
	return 0;
}