#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three types of bowling techniques:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	printf("Maximum point is %d",a);
	else if(b>a && b>c)
	printf("Maximum point is %d",b);
	else
	printf("Maximum point is %d",c);
	return 0;
}
