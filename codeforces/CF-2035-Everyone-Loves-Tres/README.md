# Everyone Loves Tres

This problem requires finding the smallest integer of a given length `n` that consists only of digits `3` and `6`, and is divisible by both `33` and `66`. If no such integer exists, the program should output `-1`.

## Problem Summary

### Input

- The first line contains an integer `t` (1 ≤ `t` ≤ 500), indicating the number of test cases.
- Each subsequent line contains an integer `n` (1 ≤ `n` ≤ 500), indicating the length of the decimal representation.

### Output

- For each test case, output the smallest required integer if it exists; otherwise, print `-1`.

## Approach and Rationale

To solve this problem, we need to understand the constraints and properties of numbers divisible by both `33` and `66`.

1. **Divisibility Rules**:
   - A number is divisible by `33` if it is divisible by both `3` and `11`.
   - A number is divisible by `66` if it is divisible by both `2`, `3`, and `11`.

2. **Building Numbers**:
   - Since the number must consist only of digits `3` and `6`, we need to construct numbers that satisfy the divisibility conditions.
   - We use a greedy approach to construct the smallest possible number by checking conditions for `n`.

3. **Edge Cases and Length Handling**:
   - For `n = 1` or `n = 3`, no valid number exists that meets the criteria.
   - For even `n`, the number must end in `66` to ensure divisibility by `66`.
   - For odd `n`, the number must end in `36366` to ensure divisibility by `66`.

## Time and Space Complexity

- **Time Complexity**: O(t * n), where `t` is the number of test cases and `n` is the length of the number. The construction of the number for each test case is linear in terms of `n`.
- **Space Complexity**: O(n), as we need to store the constructed number of length `n`.

## Key Test Cases

1. **n = 1**: Output `-1` (no valid number exists).
2. **n = 2**: Output `66` (smallest number ending in `66`).
3. **n = 3**: Output `-1` (no valid number exists).
4. **n = 4**: Output `3366` (smallest number ending in `66` and consists of `3`s and `6`s).
5. **n = 5**: Output `36366` (smallest number ending in `36366` and consists of `3`s and `6`s).
6. **n = 7**: Output `3336366` (smallest number ending in `36366` and consists of `3`s and `6`s).

## Extra Insights or Gotchas

- The divisibility by `66` is crucial, as it forces the number to end in specific patterns (`66` or `36366`).
- The greedy approach works because we are guaranteed to find the smallest number by appending the necessary digits to meet the divisibility rules.
- Ensure to handle edge cases properly, especially for small values of `n` where no valid number exists.