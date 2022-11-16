#include<stdio.h>
int main()
{

    int x,y;
    printf("Enter digit remove last digit stored as zero\n ");
    scanf("%d",&x);
    y = x%10;
    x = x-y;
    printf("YOur last digit is change for zero = %d",x);
    getch();
    return 0;


}
