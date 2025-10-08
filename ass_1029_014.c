//Print first N multiples of a number
#include <stdio.h>

int main() {
    int num, n, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter N (number of multiples): ");
    scanf("%d", &n);

    printf("First %d multiples of %d are:\n", n, num);

    for (i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

