#include<stdio.h>
int class( int ary[]){
    printf("arrey element\n");
    for (int i = 0; i <4; i++)
    {
        printf("%d,",ary[i]);

    }
    
}
int main(){
    int ary[4];
    for (int i = 0; i<4; i++)
    {
        printf("ary[%d]=",i);
        scanf("%d",&ary [i]);
    }
    
    class(ary);
    return 0;
}
