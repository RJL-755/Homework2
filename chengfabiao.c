#include <stdio.h>

int main()

{
	int a,b;
	for(a=5;a<65; )
	{	
		a=a+10;
		for(b=5;b<=65; )
		{	
			b=b+10;
			if(a<b)
			continue;
			printf("%d*%d=%2d\t",b,a,b*a);
		}
	printf("\n");
	}
	return 0;
}
