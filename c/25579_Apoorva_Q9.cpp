#include <stdio.h>
int main()
{printf("Apoorva 25579");
int a,b,choice;
printf("Enter first number %d",a);
scanf("%d",&a);
printf("Enter second number %d",b);
scanf("%d",&b);
printf("Enter choice 1.Addition 2.Subtraction 3.Multiplication 4.Division %d",choice);
scanf("%d",&choice);
switch(choice)
{
case(1):
	printf("Value after addition %d",a+b);
	break;
case(2):
	printf("Value after subtraction %d",a-b);
	break;
case (3):
	printf("Value after multiplication %d",a*b);
	break;
case (4):
	printf("Value after division %d",a/b);
	break;
}
}
