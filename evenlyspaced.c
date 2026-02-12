#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a,b,c:/n");
scanf("%d %d %d",&a,&b,&c);
int big,med,small;
if(a>b&&a>c)
{
big=a;
if(b>c)
{
med=b;
small=c;
}
else
{
med=c;
small=b;
}}
else if(b>a&&b>c)
{
big=b;
if(a>c)
{
med=a;
small=c;
}
else
{
med=c;
small=a;
}}
else
{
big=c;
if(b>a)
{
med=b;
small=a;
}
else
{
med=a;
small=b;
}
}
if(big-med==med-small)
{
printf("true");
}
else
{
printf("false");
}
return 0;
}