//Check whether a number is a prime palindrome
#include <stdio.h>
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return originalNum == reversedNum;
}
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number) && isPrime(number)) {
        printf("%d is a prime palindrome.\n", number);
    } else {
        printf("%d is not a prime palindrome.\n", number);
    }

    return 0;
}
