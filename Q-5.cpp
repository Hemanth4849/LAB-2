#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of a,b, and c");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && c==a)
	printf("The given numbers are equal");
	else
	printf("The given numbers are not equal");
	return 0;
}
