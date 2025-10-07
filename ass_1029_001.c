//1. write a program to check whether a number is a perfect square.//

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 1 || num == 4 || num == 9 || num == 16 || num == 25 || num == 36 || num == 49 || num == 64 || num == 81 || num == 100)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}
