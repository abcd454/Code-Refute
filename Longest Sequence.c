#include <stdio.h>
#include <assert.h>

// Function to calculate the longest sequence of identical numbers
int longest_equal_sequence(const int arr[], int size) {
    if (size == 0) return 0;

    int max_length = 1, current_length = 1;
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            current_length++;
            if (current_length > max_length)
                max_length = current_length;
        } else {
            current_length = 1;
        }
    }
    return max_length;
}

int main() {
    // Test cases
    int arr1[] = {1, 2, 2, 3, 3, 3};
    int arr2[] = {5, 5, 5, 5};
    int arr3[] = {1, 2, 3, 4, 5};
    int arr4[] = {};
    int arr5[] = {1,2,1,2,1,3}

    printf("Test Case 1: Array = {1, 2, 2, 3, 3, 3}, Output: %d\n", longest_equal_sequence(arr1, 6));  // Expected: 3
    printf("Test Case 2: Array = {5, 5, 5, 5}, Output: %d\n", longest_equal_sequence(arr2, 4));  // Expected: 4
    printf("Test Case 3: Array = {1, 2, 3, 4, 5}, Output: %d\n", longest_equal_sequence(arr3, 5));  // Expected: 1
    printf("Test Case 4: Array = {}, Output: %d\n", longest_equal_sequence(arr4, 0));  // Expected: 0
    printf("Test Case 1: Array = {1, 2, 1, 2, 1, 3}, Output: %d\n", longest_equal_sequence(arr5, 6));
    return 0;
}
