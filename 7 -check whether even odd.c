#include<stdio.h>
int main()
{
int x;
printf("Enter a number to whether check its  Even ,odd\n");
scanf("%d",&x);
(x&1)?printf("Your Number Is Odd"):printf("Your Number is Even");
getch();
return 0;
}
