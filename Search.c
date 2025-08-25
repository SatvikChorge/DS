#include <stdio.h>
int main() 
{
    int Number[20], Size, i, Key;

    // Read size of the array from user
    printf("\n Enter size of the Array (max 20): ");
    scanf("%d", &Size);

    //Validate the size of array
    if (Size <= 0 || Size > 20) 
    {
        printf("\n Invalid array size! Please enter a size between 1 and 20.\n");
        return 1;
    }

    // Read the array elements from user
    printf("\n Enter %d integer values: ", Size);
    for (i = 0; i < Size; i++) 
    {
        scanf("%d", &Number[i]);
    }

    // Read the element to be searched
    printf("\n Enter the element to be searched: ");
    scanf("%d", &Key);

    // Linear Search Logic
    for (i = 0; i < Size; i++) 
    {
        if (Key == Number[i]) 
        {
        printf("\n Element - %d found at index - %d.", Key, i);
        break;
        }
    }

    if (i == Size) 
    {
        printf("\n Given element is not found in the list!!!");
    }

    return 0;
}