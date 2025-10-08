//Search for an element in an array
#include <stdio.h>
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int my_array[] = {10, 20, 30, 40, 50};
    int size = sizeof(my_array) / sizeof(my_array[0]); 
    int search_key = 30; 
    int result = linearSearch(my_array, size, search_key);
    if (result != -1) {
        printf("Element %d found at index %d.\n", search_key, result);
    } else {
        printf("Element %d not found in the array.\n", search_key);
    }
    search_key = 99;
    result = linearSearch(my_array, size, search_key);
    if (result != -1) {
        printf("Element %d found at index %d.\n", search_key, result);
    } else {
        printf("Element %d not found in the array.\n", search_key);
    }

    return 0;
}
