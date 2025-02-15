#include<stdio.h>
int main()
{
    int a = 20;
    int b = 10;
    int *ptr_a, *ptr_b ;
    ptr_a = &a; *ptr_b;
    ptr_a = &a;
    ptr_b = &b;
    if (*ptr_a <*ptr_b){
        printf("%d", a);
    }
    else{

        
        printf("%d", b);
    }
    return 0;
}