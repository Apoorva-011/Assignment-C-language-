#include <stdio.h>
int main()
{printf("Apoorva 25579");
int a,b, s;
printf ("Roll number of student",a);
scanf("%d",&a);
printf ("Name of student",s);
scanf("%s",&s);
printf("Marks of student",b);
scanf("%d",&b);
if (b>90)
printf("Grade is A");
if ((b<90) && (b>80))
printf ("Grade is B");
if ((b<80) && (b>60))
printf("Grade is C");
else
printf("Fail");
}
