#include<stdio.h>
int main()
{
int a,b,c,t;
printf("Enter your basic salary:");
scanf("%d",&a);
b=a*44/100;
printf("Your HRA is %d \n",b);
c=a*17/100;
printf("Your DA is %d \n",c);
t=a+b+c;
printf("Your total salary is %d",t);
return 0;
}
