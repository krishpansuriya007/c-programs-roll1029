//Compare two strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    fgets(str1);  
    printf("Enter second string: ");
    fgets(str2);

    result = strcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}

