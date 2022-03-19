#include <stdio.h>
int main()
{
	int m,n,p,q,j,k,i;
	printf("Enter the size of matrix A");
	scanf("%d%d", &m,&n);
	printf("Enter the size of matrix B");
	scanf("%d%d", &p,&q);
	if(n!= p)
	{
		printf("Matrix multiplication not possible\n");
		return 1 ;
	}
	int a[m][n], b[p][q], c[m][q];
	printf("enter data into matrix A:');
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Matrix A - \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j,n;j++)
		{
			printf("%d\t", a[i][j]);
		}
	}
	
	

