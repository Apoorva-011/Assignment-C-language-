#include <stdio.h>
int main()
{printf("Apoorva 25579");
int a;int s; int units;
printf("User id %d",a);
scanf("%d",&a);
printf("Name of user %s",s);
scanf("%s",&s);
printf("Units consumed %d",units);
scanf("%d",&units);
float bill; float sum;
if (units<=100)
sum=units*1.00;
if(units<=300)
sum=units*2.00;
if (units>300)
{sum=units*3.00;}
bill=sum+50.00;
if (bill >1000.00)
bill=bill +(15/100 )*bill;
printf("Bill details %f",bill);
}
