#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,sum;
    float average;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);


    sum=a+b;
    average=sum/2.0;
    printf("sum=%d,average=%f",sum,average);
    getch();
}
