# LRC and VIP Problem Solution

## Problem Summary

The problem "LRC and VIP" requires you to divide an array of integers into two sequences, B and C, such that:
- Each element belongs to exactly one sequence.
- Both sequences contain at least one element.
- The greatest common divisor (GCD) of elements in sequence B is not equal to the GCD of elements in sequence C.

## Input/Output Description

### Input
- The first line contains the number of test cases `t` (1 ≤ t ≤ 500).
- Each test case starts with an integer `n` (2 ≤ n ≤ 100), representing the size of the array.
- The next line contains `n` integers, the elements of the array.

### Output
- For each test case, output "Yes" if a solution exists, followed by `n` integers indicating the sequence each element belongs to.
- If no solution exists, output "No".

## Approach and Rationale

### Greedy Approach

The solution employs a greedy approach:
1. **Identify the Maximum Element**: Find the maximum element in the array.
2. **Distribute Elements**: Assign the maximum element to sequence B and all other elements to sequence C.
3. **Check for Valid Distribution**:
   - If all elements in the array are the same, it's impossible to satisfy the GCD condition. Output "No".
   - Otherwise, output "Yes" and the sequence assignments.

### Correctness Proof

The greedy approach works because:
- The GCD of a set of numbers is less than or equal to any number in the set.
- By placing the maximum element in sequence B, the GCD of B will be at least the maximum element.
- The GCD of the remaining elements (sequence C) will be less than or equal to the maximum element but not equal to it because the elements are not all the same.

## Time and Space Complexity

### Time Complexity
- **O(n)** per test case, where `n` is the number of elements in the array. This is because we scan the array once to find the maximum element and check the distribution.

### Space Complexity
- **O(n)** for storing the array elements.

## Key Test Cases

1. **All Elements the Same**: This is an edge case where no solution exists. Example: `[5, 5, 5, 5]`.
2. **Maximum Element at the End**: Ensure the solution works when the maximum element is not at the beginning. Example: `[1, 2, 3, 4]`.
3. **Smallest Array Size (n=2)**: Ensure the solution works for the smallest possible array size. Example: `[4, 5]`.
4. **Largest Array Size (n=100)**: Ensure the solution handles the upper limit of the array size efficiently.
5. **Multiple Test Cases**: Ensure the solution correctly processes multiple test cases in sequence.

## Extra Insights or Gotchas

- **GCD Properties**: Understanding the properties of the GCD is crucial. The GCD of a set of numbers is always less than or equal to the smallest number in the set.
- **Edge Cases**: Pay special attention to edge cases like arrays with all identical elements or arrays with the smallest possible size.
- **Efficiency**: The solution is efficient with O(n) complexity, making it suitable for the constraints (n ≤ 100).