#include<stdio.h>
void main()
{ int n;
printf("enter the number");
scanf("%d", &n);

if(n%2==0 && n>=2 && n<=5)
{
printf("not weird");
}
else if(n%2==0 && n>=6 && n<=20)
{
printf("weird");
}
else if(n%2==0 && n>20)
{
printf("not weird");
}
else
{
printf("weird");
}
}
