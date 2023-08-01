#include <stdio.h>
#include <math.h>
int main()
{printf("Apoorva 25579");
int a,n,c,b,d=0,i,g,e;
printf("Enter number to be checked",a);
scanf("%d",&a);
n=a*a;
g=n;
while (g>0)
{g=g/10;
d=d+1;}
i=pow(10,d);
b=n/i;
c=n%i;
e=b+c;
if (e==n)
printf("Number is a Kaprekar number ");
else
printf("Number is not a Kaprekar number");
}
