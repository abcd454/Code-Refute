def digit_frequency(num):
    if num < 0:
        num = -num  # Handle Negative numbers
    freq = [0] * 10

    while num > 0:
        digit = num % 10
        freq[digit] += 1
        num //= 10

    return freq

# Test cases
assert digit_frequency(1122334455) == [0, 2, 2, 2, 2, 2, 0, 0, 0, 0]
assert digit_frequency(9876543210) == [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
assert digit_frequency(0) == [1, 0, 0, 0, 0, 0, 0, 0, 0, 0]
assert digit_frequency(-12321) == [0, 2, 2, 1, 0, 0, 0, 0, 0, 0]
print("All tests passed!")
