#include<stdio.h>
int main ()
{
int a,b,c;
printf("enter the value in a:");
scanf("d",&a);
printf("enter the value in b:");
scanf("%d",&b);
printf("enter the value in c:");
scanf("%d",&c);
if(a==2 && b==2 && c==2)
{
printf("10");
}
else if(a==b && b==c && c==a)
{
 printf("5");
}
else if(b!=a && c!=a)
{
printf("1");
}
else
{
printf("0");
}
return 0;
}