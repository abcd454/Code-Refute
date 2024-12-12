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

// Function to calculate power
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to calculate the sum of prime factors with powers
int prime_factor_sum(int n) {
    if (n <= 0) return 0; // Handle the case where n is less than or equal to 0
    int sum = 0, power_index = 1;

    for (int i = 2; n > 1; i++) {
        if (is_prime(i) && n % i == 0) {
            sum += power(i, power_index++);
            while (n % i == 0) n /= i; // Remove all instances of the factor
        }
    }
    return sum;
}

int main() {
    // Test cases
    assert(prime_factor_sum(60) == 136);  // 2^1 + 3^2 + 5^3 = 136
    assert(prime_factor_sum(28) == 51);   // 2^1 + 7^2 = 51
    assert(prime_factor_sum(13) == 13);   // Single prime factor
    assert(prime_factor_sum(1) == 0);     // No factors
    printf("All tests passed!\n");
    return 0;
}
