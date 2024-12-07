def find_missing_number(arr):
    n = len(arr) + 1
    xor_all = 0
    xor_arr = 0

    # XOR of all numbers from 1 to n
    for i in range(1, n + 1):
        xor_all ^= i

    # XOR of array elements
    for num in arr:
        xor_arr ^= num

    # Missing number
    return xor_all ^ xor_arr

# Test cases
assert find_missing_number([1, 2, 4, 6, 3, 7, 8]) == 5
assert find_missing_number([2, 3, 1, 5]) == 4
assert find_missing_number([1]) == 2
assert find_missing_number([]) == 1
print("All tests passed!")
