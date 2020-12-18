#include <stdio.h>
#include <math.h>

int main()

{	
	unsigned char a;
	printf("input a number:");
	scanf("%hhu",&a);
	if(a<128)
	{
		printf("Boy.ID:%d",a);	
	}
	if(a>=128)
	{
		printf("Girl.ID:%d",a-128);
		
	}
	return 0;
}
