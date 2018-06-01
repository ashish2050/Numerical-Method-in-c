#include <stdio.h>
#include <conio.h>
#define max 50
int main()
{
	int n,i,j;
	float x[max],y[max],XP,s=0,p;
	printf("Enter the value of n :");
	scanf("%d",&n);
	printf("Enter the value of x\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("Enter the value of f(x)\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	printf("Enter the value of XP :");
	scanf("%f",&XP);
	for(i=0;i<n-1;i++)
	{
		p=1;
		for(j=0;j<n-1;j++)
		{
			if(i!=j)
			{
				p*=(XP-x[j])/(x[i]-x[j]);
			}
		}
		s=s+p*y[i];
	}
	printf("The sum value of X(%g): %g",XP,s);
	
	getch();
	return 0;
}