#include <stdio.h>

void element(int array[], int size) {
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

int main() {
    int array[4];
    int size = sizeof(array) / sizeof(array[0]);
    element(array, size);
    
    printf("Array elements in main:\n");
    for (int i = 0; i < size; i++) {
        printf("[%d] = %d\n", i, array[i]);
    }

    return 0;
}