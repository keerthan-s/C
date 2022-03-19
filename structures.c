 
 #include<stdio.h>

 struct student
 	{
 		int id;
 		char name[20];
 		float sub[6];
 		float avg;
 	};
 
 int main()
 {
 	struct student s[20];
	float sum=0;
 	int i,j,n;
 	

 	printf("Enter the number of records :");
 	scanf("%d",&n);
 	

 	printf("Enter %d student details...\n",n);
 	
 	for(i=0;i<n;i++)
 	{
 		printf("\n\nEnter student ID, name :");	
 		scanf("%d%s",&s[i].id, s[i].name);

		printf("Enter 6 subject marks :");

		for (j=0;j<6;j++)
			{
				scanf("%f", &s[i].sub[j]);
			}
 	}
 	

	 
 	for(i=0;i<n;i++)
 	{
		sum=0;
		for (j=0;j<6;j++)
			{
				sum = sum + s[i].sub[j]; 
			}
 		s[i].avg = sum / 6;
 	}
 	
 	
 	printf("Students scoring above the average marks....\n");
 	printf("\n\nID\tName\tAverage\n\n");
 	
 	for(i=0;i<n;i++)
 	{
 		if(s[i].avg>=35.0)
 		printf("%d\t%s\t%f\n",s[i].id,s[i].name,s[i].avg);
 	}
 	
  	
 	
  	printf("\n\nStudents scoring below the average marks....\n");
 	printf("\n\nID\tName\tAverage\n\n");
 	
 	for(i=0;i<n;i++)
 	{
 		if(s[i].avg<35.0)
 		printf("%d\t%s\t%f\n",s[i].id,s[i].name,s[i].avg);
 	}
 	
 	return 0;
 }
