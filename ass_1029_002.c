//Compare lengths of two strings
#include <stdio.h>
#include <string.h> 

int main() {
    char str1[] = "Hello";
    char str2[] = "World!";

  
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    
    if (len1 > len2) {
        printf("String 1 is longer than String 2.\n");
    } else if (len1 < len2) {
        printf("String 2 is longer than String 1.\n");
    } else {
        printf("String 1 and String 2 have the same length.\n");
    }

    return 0;
}
