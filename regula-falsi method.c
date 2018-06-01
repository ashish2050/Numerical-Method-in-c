#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e .0001

float f(float x)
{
	return((x*x*x)-(4*x)-9);
}
int main()
{
		int i;
		float x0,xn,x;
		for(i=0;i<=100;i++)
		{
			if(f(i)*f(i+1)<0)
			{
				break;
			}
		}
		x0=i;
		xn=i+1;
		
		do{
			x=(x0*f(xn)-xn*f(x0))/(f(xn)-f(x0));
			if(f(x0)*f(x)<0)
				xn=x;
			else
				x0=x;
			printf("\n%.4f",x);
			
		}while(fabs(f(x))>e);
		
		printf("\n Approx root :%.4f",x);
	return 0;
}