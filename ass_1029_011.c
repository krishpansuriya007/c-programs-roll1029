//Reverse a given string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    gets(str);  // Warning: gets() is unsafe, but okay for simple demos

    j = strlen(str) - 1; // index of last character

    // swap characters from both ends
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

