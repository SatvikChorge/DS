#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    printf("Enter %d integers : \n", n);
    for(i = 0; i < n; i++) {
        printf("Element for index[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nYour entered elements are : \n");
    for(i = 0; i < n; i++) {
        printf("Index[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}