#include <stdio.h>
#include <conio.h>
float f(float x)
{
    return(1/(1+(x*x)));
}
int main()
{
    float x0,xn,h,s,se=0,so=0,res;
    int n,i;
    printf("Enter the number of interval(must be even) :");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("Enter the lower bound :");
        scanf("%f",&x0);
        printf("Enter the upper bound :");
        scanf("%f",&xn);
        h=(xn-x0)/n;

        s=f(x0)+f(xn);
        for(i=1; i<n; i++)
        {
            if(i%2==0)
            {
                se=se+2*f(x0+i*h);

            }
            else
            {
                so=so+4*f(x0+i*h);
            }
        }
        s=(s+se+so);
        s=s*(h/3);
        printf("The value of integral is  : %f",s);
    }
    else
    {
        printf("Simpson's rule is not applicable");
    }
	
    getch();
    return 0;
}