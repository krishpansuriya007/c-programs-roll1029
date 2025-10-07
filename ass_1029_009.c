//Insert an element at a specific position in an array
#include <stdio.h>

#define MAX_SIZE 100 
int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; 
    int current_size = 5; 
    int element_to_insert, position;

    printf("Array before insertion: ");
    for (int i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to insert: ");
    scanf("%d", &element_to_insert);

    printf("Enter the position (0 to %d) to insert the element: ", current_size);
    scanf("%d", &position);
    if (position < 0 || position > current_size || current_size >= MAX_SIZE) {
        printf("Invalid position or array is full.\n");
        return 1; 
    }
    for (int i = current_size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element_to_insert;
    current_size++;

    printf("Array after insertion: ");
    for (int i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
}
