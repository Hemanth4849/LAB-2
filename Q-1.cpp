#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of a,b and c");
	scanf("%d %d %d",&a,&b,&c);
	{
	if(a>b && a>c)
	printf("Greastest number is %d",a);	
	else if(b>a && b>c)
	printf("Greastest number is %d",b);
else
printf("Greastest number is %d",c); 
}
return 0;
}
