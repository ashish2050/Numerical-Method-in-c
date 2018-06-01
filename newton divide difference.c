#include <stdio.h>
#include <conio.h>
#define max 10
int main()
{
	int n,i,j;
	float x[max],y[max],F[max][max]={0},p=1,XP,s;
	printf("Enter the value of n :\n");
	scanf("%d",&n);
	printf("Enter the value of x \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("Enter the value of f(x) \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		F[0][i]=y[i];
	}
	printf("Enter the value of XP :");
	scanf("%f",&XP);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			F[i][j]=((F[i-1][j+1]-F[i-1][j])/(x[i+j]-x[j]));
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%g\t",F[i][j]);
		}
		printf("\n");
	}
	s=y[0];
	for(i=1;i<n;i++)
	{
		p*=XP-x[i-1];
		s+=p*F[i][0];
	}
	
	printf("The sum of F(%g) :%g",XP,s);
	return 0;
	
}