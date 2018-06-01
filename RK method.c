#include <stdio.h>
#include <conio.h>

float f(float x,float y)
{
	return((y-x)/(x+y));
}
int main()
{
	float h,xn,x,y,k1,k2,k3,k4;
	printf("Enter the value of x0,y0,xn,h\n");
	scanf("%f %f %f %f",&x,&y,&xn,&h);
	while(x<=xn)
	{
		k1=h*f(x,y);
		k2=h*f((x+(h/2)),(y+(k1/2)));
		k3=h*f((x+(h/2)),(y+(k2/2)));
		k4=h*f((x+h),(y+k3));
		
		y=y+((k1+(2*k2)+(2*k3)+k4)/6);
		x=x+h;
		printf("\n y(%f) : %f",x,y);
	}
	printf("\nValue at x=%f, the value of y=%f",x,y);
	
	return 0;
}