#include<stdio.h>
int main()
{
int x,y;
printf("Enter Two for swapm without third variable\n");
scanf("%d %d",&x,&y);
x = x+y;
y = x-y;
x = x-y;
printf("Swap your number %d to %d",x,y);
getch();
return 0;
}
