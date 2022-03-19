#include <stdio.h>
int main()
{
	int a[20];
	int n, i, j, temp, key, mid, first, last;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("enter elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	printf("the elements of the array before sorting are\n");
	for(i=0;i<n;i++)
	printf("%d\t", a[i]);
	for (i=0; i<n-1; i++)
	{
		for(j=0;j<n-1-i;j++)
		{
		 	if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nThe elements of the array after sorting are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter key element to be searched\n");
	scanf("%d",&key);
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			printf("The element %d is found at position %d\n",key, mid+1);
			return 0;
		}
		else 
		{	if(key<a[mid])
			{
			last = mid-1;
			}
			else
			{
			first=mid+1;
		}	}
       }		
	printf("The element %d not found in array \n", key);
	return(1);
}



		
	
 

