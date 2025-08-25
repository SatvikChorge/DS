#include <stdio.h>

int main() {

    //Example 1: Overwritting Insertion 

    int arr[5] = {60, 70, 66, 77, 67};

    printf("\nArray before overwrite :");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    int newElement = 76, p = 2;
    arr[p] = newElement;

printf("\nArray after overwrite : ");
for(int p = 0; p < 5; p++) {
        printf("%d ", arr[p]);
    }

//Example 2: Shifting insertion

int ARR[96] = {66,77,67,76,60,70};
int size = 6, newNumber = 96, position = 2;

printf("\nArray before insertion : \n");
for(int s = 0; s < size; s++) {
    printf("%d ", ARR[s]);
}

for(int s = size; s > position; s--) {
    ARR[s] = ARR[s - 1];
}

ARR[position] = newNumber;
size++; 

printf("\nArray after insertion of : \n");
for (int s = 0; s < size; s++) {
    printf("%d ", ARR[s]);
}

    return 0;
}