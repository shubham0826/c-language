#include <stdio.h>
int main()
{
    float ts,bs,da,ta,hra;
    system("cls");
    printf("enter the baic salary:");
    scanf("%f",&bs);


    if (bs<3500)
    {
         da=bs*0.05;
         ta=bs*0.02;
         hra=bs*0.03;
         ts=bs+da+ta+hra;
         printf("the basic salary :%2f\n the da is 5%%:%.2f\nthe hra is 3%%:%.3f\nthe hra is 5%%:%.2f\n the total salary : %.2f",bs,da,ta,hra,ts);
    }
    else if(bs<=3500 && bs>90000)
    {
         da=bs*0.07;
         ta=bs*0.03;
         hra=bs*0.05;
         ts=bs+da+ta+hra;
         printf("the basic salary :%2f\n the da is 7%%:%.2f\nthe hra is 3%%:%.2f\nthe hra is 5%%:%.2f\n the total salary : %.2f",bs,da,ta,hra,ts);
    }
    else
    {
         da=bs*0.12;
         ta=bs*0.08;
         hra=bs*0.10;
         ts=bs+da+ta+hra;
         printf("the basic salary :%2f\n the da is 12%%:%.2f\nthe ta is 8%%:%.3f\nthe hra is 10%%:%.2f\n the total salary : %.2f",bs,da,ta,hra,ts);
    }
    return 0;
}