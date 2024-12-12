def digit_frequency(num):
    if num < 0:
        num = abs(num)  # Handle negative numbers
    freq = [0] * 10
    while num > 0:
        freq[num % 10] += 1
        num //= 10
    return freq

# Test cases
print(f"Test Case 1: Number = 112233, Output: {digit_frequency(112233)}")  # Expected: [0, 2, 2, 2, 0, 0, 0, 0, 0, 0]
print(f"Test Case 2: Number = 9876543210, Output: {digit_frequency(9876543210)}")  # Expected: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
print(f"Test Case 3: Number = 0, Output: {digit_frequency(0)}")  # Expected: [1, 0, 0, 0, 0, 0, 0, 0, 0, 0]
print(f"Test Case 4: Number = -12321, Output: {digit_frequency(-12321)}")  # Expected: [0, 2, 2, 1, 0, 0, 0, 0, 0, 0]
print(f"Test Case 5: Number = 100000, Output: {digit_frequency(100000)}")  # Expected: [5, 1, 0, 0, 0, 0, 0, 0, 0, 0]
