#include<stdio.h>
int class (int arr[])
{
    printf("array elements");
    for(int i=0; i<4; i++){
        printf("arr[%d]", arr[i]);
        scanf("%d", &i);
    }
    }
    int main()
    {
        int arr[4];
        class (arr );
        return 0;
    
}