 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
 	int i, n;
 	float a[10],sum,mean,var,sd;
 	float *p;       	 	
 	printf("Enter Number of elements:");
 	scanf("%d", &n); 		
 	printf("Enter %d numbers :",n);
 	p = a;		
 	for (i=0;i<n;i++)
 	{
 		scanf("%f",p);
 		p++;	
 	} 
 	sum = mean = var = sd = 0.0;
 	p = a;		
 	for(i=0;i<n;i++)
 	{
 		sum = sum + (*p);
 		p++;		
 	}	
 	mean = sum / (float) n;
 	p = a;
 	for(i=0;i<n;i++)
 	{
 		var = var + pow( (*p - mean),2);
 		p++;
 	}
 	var = var / (float) n;	
 	sd = sqrt(var);	
 	printf("Sum = %f\n", sum);
 	printf("Mean = %f\n", mean);
 	printf("Standard Deviation = %f\n", sd);	
 	return 0;
 }
