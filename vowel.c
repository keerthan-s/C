#include<stdio.h>
int main()
{
	char c;
	printf("Enter a letter");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("character %c is a vowel",c);
	}
	else
	{
		printf("character %c is a consonant",c);
	}
	return 0;
}

