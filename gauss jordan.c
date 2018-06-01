#include <stdio.h>
#include <conio.h>
#define max 20
int main()
{
	int n,i,j,k;
	float a[max][max],x[max]={0},s,m;
	printf("Enter the number of constaints :");
	scanf("%d",&n);
	printf("Enter the value of matrix :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			scanf("%f",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nAugmented matrix :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	// converting the augmented matrix into upper triangular matrix form 
	
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i!=j)
				{
					m=a[j][i]/a[i][i];
					for(k=i;k<=n+1;k++)
						a[j][k]=a[j][k]-m*a[i][k];
				}
			}
		}
		printf("\nResultant matrix  :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			printf("%.2f\t ",a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
		x[i]=a[i][n+1]/a[i][i];
	
	printf("Resultant values :\n");
	for(i=1;i<=n;i++)
	{
		printf("%.2f\n",x[i]);
	}
		
	
	return 0;
}