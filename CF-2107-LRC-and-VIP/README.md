# LRC and VIP Solution

## Problem Summary

The problem "LRC and VIP" is about organizing a sequence of numbers such that the largest number appears as frequently as possible in its original positions, and the rest are filled with smaller numbers. The solution needs to determine if it's possible to rearrange the sequence to meet these criteria and, if so, provide the rearranged sequence.

### Input
- The first line contains an integer `t` (1 ≤ t ≤ 1000), the number of test cases.
- For each test case:
  - The first line contains an integer `n` (1 ≤ n ≤ 100), the number of elements in the sequence.
  - The second line contains `n` integers, the elements of the sequence.

### Output
- For each test case, output:
  - "NO" if it's not possible to rearrange the sequence to meet the criteria.
  - "YES" followed by a line with `n` characters, where '1' indicates the position of the largest number and '2' indicates the position of a smaller number.

## Approach and Rationale

The approach involves checking if all elements in the sequence are the same. If they are, it's impossible to rearrange them to meet the criteria. Otherwise, the largest element can be placed in its original positions, and the rest can be filled with smaller numbers.

### Correctness Proof
- **Greedy Approach**: The greedy approach works here because placing the largest number in its original positions ensures that it appears as frequently as possible. The remaining positions are filled with smaller numbers, which does not affect the frequency of the largest number.
- **Edge Cases**: The solution correctly handles cases where all numbers are the same by immediately outputting "NO". If there are multiple largest numbers, the solution still works because it places all instances of the largest number in their original positions.

## Time and Space Complexity

### Time Complexity
- **O(n)** per test case: The solution scans the input array once to find the maximum value and check if all elements are the same.
- For `t` test cases, the overall time complexity is **O(t * n)**.

### Space Complexity
- **O(n)** for storing the input array.
- **O(1)** for additional variables (e.g., `max`, `all_same`).

## Key Test Cases

1. **All Elements Same**:
   - Input: `n = 5`, `arr = [3, 3, 3, 3, 3]`
   - Output: `NO`

2. **Multiple Largest Elements**:
   - Input: `n = 5`, `arr = [5, 5, 3, 5, 4]`
   - Output: `YES 1 1 2 1 2`

3. **Single Largest Element**:
   - Input: `n = 5`, `arr = [2, 1, 3, 4, 5]`
   - Output: `YES 2 2 2 2 1`

4. **Edge Case with Minimum Input**:
   - Input: `n = 1`, `arr = [7]`
   - Output: `YES 1`

## Extra Insights or Gotchas

- **Array Initialization**: In C, variable-length arrays (VLAs) are used, which are supported by some compilers but not by the C standard. Ensure your compiler supports VLAs or use dynamic memory allocation.
- **Input Handling**: Always check the bounds and validity of input to avoid buffer overflows or invalid memory accesses.
- **Edge Cases**: Pay special attention to edge cases where `n = 1` or where all elements are the same. These edge cases can reveal bugs in the logic.