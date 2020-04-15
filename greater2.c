#include<stdio.h>
void main()
{
int n1, n2;
printf("enter first number");
scanf("%d",&n1);
printf("enter second number");
scanf("%d",&n2);
if(n1>n2)
{
printf("%d is greater then %d", n1, n2);
}
else
{
printf("%d is greater than %d", n2 , n1);
}
}
