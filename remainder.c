#include<stdio.h>
int main()
{
int divident,divisor; //divident>divisor//
printf("enter divident :");
scanf("%d", &divident);
printf("enter divisor :");
scanf("%d", &divisor);
int quotient = divident / divisor;
int remainder = divident - divisor * quotient;
printf(" The remainder when %d is divided by %d is : %d", divident, divisor, remainder);
return 0;
}