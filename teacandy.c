#include<stdio.h>
int main()
{
int tea,candy;
printf("enter the amount of tea and candy \n");
scanf("%d %d",&tea,&candy);
if(tea<5||candy<5)
{
printf("0");
}
else if(tea>=2*candy||candy>=2*tea)
{
printf("2");
}
else
{
printf("1");
}
return 0;
}