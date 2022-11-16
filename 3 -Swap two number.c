#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter a number : x =");
scanf("%d",&x);

printf("Enter a number : y =");
scanf("%d",&y);

z = x;
x = y;
y = z;
printf(" swap your number x=%d to y=%d",x,y);
getch();
return 0;
}
