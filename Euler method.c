#include <stdio.h>
#include <conio.h>
float f(float x,float y)
{
	return((y-x)/(x+y));
}
int main()
{
	float x,y,xn,h;
	printf("Enter the valueof x,y,xn,h\n");
	scanf("%f %f %f %f",&x,&y,&xn,&h);
	while(x<=xn)
	{
		y=y+h*f(x,y);
		x=x+h;
		printf("\ny(%f) :%f",x,y);
	}
	
	printf("\n at a=%f, the value of y=%f",x,y);
	return 0;
}