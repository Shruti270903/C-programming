#include<stdio.h>
int main()
{
    float principle,rate,time,si;
    printf("entr principle :");
    scanf("%f", &principle);
    printf("enter rate : ");
    scanf("%f", &rate); 
    printf("enter time :");
    scanf("%f", &time);
    si = (principle*rate*time)/100;
    printf("simple intrest is : %f", si);
    return 0;

}