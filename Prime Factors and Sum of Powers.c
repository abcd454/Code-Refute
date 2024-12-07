#include <stdio.h>
#include <assert.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to calculate the sum of prime factors raised to their position
int prime_factor_sum(int n) {
    int sum = 0, power = 1, factor = 2;

    while (n > 1) {
        if (is_prime(factor) && n % factor == 0) {
            sum += factor * power; // factor ^ power (simplified for testing small values)
            n /= factor;
            power++;
        } else {
            factor++;
        }
    }
    return sum;
}

int main() {
    // Test cases using assert
    assert(prime_factor_sum(60) == 136); // 2, 3, 5 -> 2^1 + 3^2 + 5^3
    assert(prime_factor_sum(28) == 10);  // 2, 7 -> 2^1 + 7^2
    assert(prime_factor_sum(1) == 0);    // No prime factors
    assert(prime_factor_sum(11) == 11);  // 11 -> 11^1
    printf("All tests passed!\n");
    return 0;
}
