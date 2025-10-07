//Print the first N natural numbers in reverse
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Natural numbers from %d to 1 in reverse order:\n", n);
        for (i = n; i >= 1; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
