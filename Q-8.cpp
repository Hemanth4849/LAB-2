#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of the triangle");
	scanf("%d %d %d",&a,&b,&c);
	{
		if(a==b && b==c && c==a)
		printf("EQUILATERAL TRIANGLE");
		else if (a==b && a&&b!=c)
		printf("ISOSCELES TRIANGLE");
		else if (a==c && a&&c!=b)
		printf("ISOSCELES TRIANGLE");
		else if (b==a && b&&a!=c)
		printf("ISOSCELES TRIANGLE");
		else if (b==c && b&&c!=a)
		printf("ISOSCELES TRIANGLE");
		else if (c==a && c&&a!=b)
		printf("ISOSCELES TRIANGLE");
		else if (c==b && c&&b!=a)
	    printf("ISOSCELES TRIANGLE");
		else
		printf("SCALENE TRIANGLE");
	}
	return 0;
}
