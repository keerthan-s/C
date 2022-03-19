#include<stdio.h>
 
 
 int btod(int);	
 int main()
 {
 	int binary, decimal;
 	printf("Enter binary input :");
 	scanf("%d", &binary);
 	if(binary < 0)
 	{
 		printf("Invalid Input. \n");
 		return 1;
 	} 	
 	decimal = btod(binary); 	
 	printf("Decimal equivalent = %d\n", decimal);
 	
 	return 0;
 }
 
 int btod(int bin)
 {
 	if (bin == 0)
 	{
 		return 0;
 	}
 	else
 	{
 		return (bin % 10 + btod(bin/10) * 2);
 	}
 }
