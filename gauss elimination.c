#include <stdio.h>
#include <conio.h>

int main()
{
	float a[20][20],x[30],s,m;
	int i,j,n,k;
	printf("Enter the number of equations :");
	scanf("%d",&n);
	printf("Enter the co-efficient of the equation :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			scanf("%f",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nAugmented Matrix :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	// converting augmented matrix into upper triangular matrix
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			m=a[j][i]/a[i][i];
			for(k=i;k<=n+1;k++)
			{
				a[j][k]=a[j][k]-m*a[i][k];
			}
		}
	}
	printf("\nUpper triangular matrix :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	x[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		s=0.0;
		for(j=i+1;j<=n;j++)
		{
			s=s+a[i][j]*x[j];
		}
		x[i]=(a[i][n+1]-s)/a[i][i];
	}
	for(i=1;i<=n;i++)
	{
		printf("\nThe value X[%d]:%.2f",i,x[i]);
	}
	return 0;
}