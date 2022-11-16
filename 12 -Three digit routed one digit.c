#include<stdio.h>
int main()
{
int x,r,tem;
printf("Enter a three digit number for routed one digit\n");
scanf("%d",&x);
r = x%10;
tem = x/10;
x = (r*100)+tem;
printf("Three Digit number Routed one number right to left =%d",x);
getch();
return 0;
}
