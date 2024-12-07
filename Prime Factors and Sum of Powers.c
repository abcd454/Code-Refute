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

// Function to calculate power manually (avoiding math.h)
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to calculate prime factor sum
int prime_factor_sum(int n) {
    int sum = 0, power_index = 1;

    for (int i = 2; i <= n; i++) {
        while (is_prime(i) && n % i == 0) {
            sum += power(i, power_index++);
            n /= i; // Divide to remove the factor
        }
    }

    return sum;
}

int main() {
    // Test cases
    assert(prime_factor_sum(60) == 136); // 2^1 + 3^2 + 5^3 = 136
    assert(prime_factor_sum(28) == 10); // 2^1 + 7^2 = 10
    assert(prime_factor_sum(1) == 0);   // No factors
    assert(prime_factor_sum(13) == 13); // Single prime factor
    printf("All tests passed!\n");
    return 0;
}
