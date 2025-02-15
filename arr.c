#include<stdio.h>
int display (int arr[])
{
printf("d", arr[0]);
printf("%d", arr[1]);
}
int main()
{
  int arr[4]= {1,2};
  display(arr);
    return 0;
}