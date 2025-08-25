#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60};
    int data, pos, i, n = 5;

    printf("\nCurrent array elements : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter data to insert : ");
    scanf("%d", &data);

    printf("\nEnter position to insert : ");
    scanf("%d", &pos);

    if(pos < 0 || pos > n) {
        printf("\nInvaid position.\n");
        return 1;
    }
    if(n == 10) {
        printf("\nArray is full, cannot insert.\n");
        return 1;
    }

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = data;
    n++;

    printf("\nArray after insertion : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}