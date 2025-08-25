#include<stdio.h>

int main() {

    //Example 1 : Static Array

    int numbers[5];

    printf("Enter 5 integers: \n");
    for(int i = 0; i < 5; i++) {
        printf("Enter numbers for index[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered array numbers: \n");
    for(int i = 0; i < 5; i++) {
        printf("at index[%d] = %d\n", i, numbers[i]);
    }

    //Example 2 : Static Array with initialization

    float inches[5] = {6.7, 7.6, 9.6, 6.9, 7.9};

    printf("Recorded inches for trees : \n");
    for (int s = 0; s < 5; s++) {
        printf("Tree %d : %1.finches\n", s + 1, inches[s]);
    }
    

    return 0;
}