#include<stdio.h>
#include<math.h> 
#define pi 3.142857
int main()
{
	float x;
	float num,den,sum,degree,term;
	int i;
	printf("enter the value in degrees\n");
	scanf("%f",&degree);
	x=(pi/180)*degree;
	num=x;
	den=1;
	sum=0;
	i=1;
	do
	{
		term=num/den;
		sum=sum+term;
		i=i+2;
		num=(-num)*x*x;
		den=den*(i)*(i-1);
	}
	while(fabs(term>=0.00001));
	{
		printf("computed value of sin %f = %f\n",degree,sum);
		printf("using the built in library function, the value of %f =%f\n",degree,sin(x));
	}
	return 0;
	}
	
