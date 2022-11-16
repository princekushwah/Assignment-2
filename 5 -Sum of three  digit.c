#include<stdio.h>
int main()
{
int x,sum =0;
printf("Enter Three Digit For Sum \n");
scanf("%d",&x);
sum =x%10;
x =x/10;
sum = (x%10)+sum;
x =x/10;
sum = sum+x;
printf("Sum of your digit =%d",sum);
getch();
return 0;
}
