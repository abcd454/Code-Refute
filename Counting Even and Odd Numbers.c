#include <stdio.h>
#include <assert.h>

// Function to count even and odd numbers in an array
void count_even_odd(const int arr[], int size, int *even_count, int *odd_count) {
    *even_count = 0;
    *odd_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (*even_count)++;
        } else {
            (*odd_count)++;
        }
    }
}

int main() {
    // Test cases
    int even_count, odd_count;

    int arr1[] = {1, 2, 3, 4, 5, 6};
    count_even_odd(arr1, 6, &even_count, &odd_count);
    assert(even_count == 3 && odd_count == 3);

    int arr2[] = {2, 4, 6, 8};
    count_even_odd(arr2, 4, &even_count, &odd_count);
    assert(even_count == 4 && odd_count == 0);

    int arr3[] = {1, 3, 5, 7};
    count_even_odd(arr3, 4, &even_count, &odd_count);
    assert(even_count == 0 && odd_count == 4);

    int arr4[] = {};  // Empty array
    count_even_odd(arr4, 0, &even_count, &odd_count);
    assert(even_count == 0 && odd_count == 0);

    int arr5[] = {0, -2, -3, -4};
    count_even_odd(arr5, 4, &even_count, &odd_count);
    assert(even_count == 3 && odd_count == 1);

    printf("All tests passed!\n");
    return 0;
}
