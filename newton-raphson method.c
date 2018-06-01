#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e .0001
float f(float x)
{
	return((x*x*x)-(4*x)-9);
}
float df(float x)
{
	return((3*x*x)-4);
}
int main()
{
	float xn,x;
	int i;
	for(i=0;i<=100;i++)
	{
		if(f(i)*f(i+1)<0)
		{
			break;
		}
	}
	xn=i+1;
	
	do{
		x=xn-(f(xn)/df(xn));
			xn=x;
		printf("\n%.4f",x);
			
	}while(fabs(f(x))>e);
	printf("\nApprox root : %.4f",x);
	return 0;
}