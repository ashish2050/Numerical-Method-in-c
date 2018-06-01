#include <stdio.h>
#include <conio.h>
float f(float x)
{
	return(1/(1+(x*x)));
}

int main()
{
	float x0,xn,h,s;
	int i,n;
	printf("Enter the number of intervals :");
	scanf("%d",&n);
	printf("Enter the lower interval :");
	scanf("%f",&x0);
	printf("Enter the upper interval :");
	scanf("%f",&xn);
	h=(xn-x0)/n;
	s=f(x0)+f(xn);
	for(i=1;i<n;i++)
	{
		s=s+2*f(x0+(i*h));
	}
	s=s*(h/2);
	printf("\nThe value of integral is : %f",s);
	return 0;
}