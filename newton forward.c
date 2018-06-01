#include <stdio.h>
#include <conio.h>
#define max 100
int main()
{
	int n,i,j;
	float x[max],y[max],F[max][max]={0},h,u,s,p=1,XP;
	printf("Enter the value of n :");
	scanf("%d",&n);
	printf("Enter the value of x :\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%f",&x[i]);
	}
	printf("Enter the value of f(x) :\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%f",&y[i]);
	}
	printf("Enter the value of x for which the value of y is wanted :");
	scanf("%f",&XP);
	for(i=0;i<n;i++)
	{
		F[0][i]=y[i];
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			F[i][j]=F[i-1][j+1]-F[i-1][j];
		}
	}
	
	// print the matrix
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%f\t",F[i][j]);
		}
		printf("\n");
	}
	h=x[1]-x[0];
	u=(XP-x[0])/h;
	s=y[0];
	p=1;
	for(i=1;i<n;i++)
	{
		p*=(u-i+1)/i;
		s=s+(p*F[i][0]);
	}
	printf("When x= %f , the corresponding Y=%f",XP,s);
	
	getch();
	return 0;
}