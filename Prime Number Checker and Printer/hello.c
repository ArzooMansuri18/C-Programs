#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) 
        return 0;  // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return 0; // Divisible, not prime
    }
    return 1; // Prime
}

int main() {
    int choice, n, i;

    printf("1. Check if a number is prime\n");
    printf("2. Print all prime numbers up to n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (isPrime(n))
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    } 
    else if (choice == 2) {
        printf("Enter the value of n: ");
        scanf("%d", &n);

        printf("Prime numbers up to %d are:\n", n);
        for (i = 2; i <= n; i++) {
            if (isPrime(i))
                printf("%d ", i);
        }
        printf("\n");
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}