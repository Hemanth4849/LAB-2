#include<stdio.h>
int main()
{
	int a,b,c,d,e,p;
	printf("Enter the marks scored in five subjects");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("The marks scored in physics is %d \n",a);
	printf("The marks scored in chemistry is %d \n",b);
	printf("The marks scored in biology is %d \n",c);
	printf("The marks scored in mathematics is %d \n",d);
	printf("The marks scored in computer is %d \n",e);
	p=(a+b+c+d+e)/5;
	{
		if(p>=90)
		printf("Grade A");
		else if(p>=80)
		printf("Grade B");
		else if(p>=70)
		printf("Grade C");
		else if(p>=60)
		printf("Grade D");
		else if(p>=40)
		printf("Grade E");
		else if(p<40)
		printf("Grade F");
		else
		printf("INVALID");
	}
	return 0;
}
