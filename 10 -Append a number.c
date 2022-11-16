#include<stdio.h>
int main()
{
int x,y;
 printf("Enter Your Digit For Append\n");
 scanf("%d",&x);
 printf("Enter append digit\n ");
 scanf("%d",&y);
 x = x*10;
 x = x+y;
 printf("Append A Number To Your Digit = %d",x);
 getch();
 return 0;

}
