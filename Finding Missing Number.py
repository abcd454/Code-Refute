def find_missing_number(arr):
    n = len(arr) + 1
    expected_sum = n * (n + 1) // 2  # Sum of all numbers from 1 to N+1
    actual_sum = sum(arr)  # Sum of the array elements
    return expected_sum - actual_sum  # Return the missing number

# Test cases
print(f"Test Case 1: Array = [1, 2, 4, 6, 3, 7, 8], Output: {find_missing_number([1, 2, 4, 6, 3, 7, 8])}")  # Expected: 5
print(f"Test Case 2: Array = [2, 3, 1, 5], Output: {find_missing_number([2, 3, 1, 5])}")  # Expected: 4
print(f"Test Case 3: Array = [1], Output: {find_missing_number([1])}")  # Expected: 2
print(f"Test Case 4: Array = [], Output: {find_missing_number([])}")  # Expected: 1
