Certainly! Let's break down the `Solution` class and its `scoreOfString` method step by step:

### Class Definition
```cpp
class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        int result = 0;

        for(int i=1; i<n; i++){
            result += abs(int(s[i]) - int(s[i-1]));
        }

        return result;
    }
};
```

### Explanation

1. **Class Declaration**:
   - `class Solution { ... };` declares a class named `Solution`.

2. **Method Definition**:
   - `int scoreOfString(string s)` is a public method of the `Solution` class that takes a `string` as input and returns an `int`.

3. **Variable Initialization**:
   - `int n = s.length();`:
     - This line initializes an integer `n` to the length of the input string `s`.

   - `int result = 0;`:
     - This line initializes an integer `result` to 0. This variable will hold the cumulative score.

4. **Loop Through String**:
   - `for(int i = 1; i < n; i++) { ... }`:
     - This `for` loop starts at `i = 1` and iterates through each character in the string `s` until the end (`i < n`).

   - Inside the loop:
     - `result += abs(int(s[i]) - int(s[i-1]));`:
       - This line calculates the absolute difference between the ASCII values of the current character `s[i]` and the previous character `s[i-1]`.
       - `int(s[i])` and `int(s[i-1])` convert the characters to their corresponding ASCII values.
       - `abs(...)` computes the absolute value of the difference.
       - This absolute difference is then added to `result`.

5. **Return Result**:
   - `return result;`:
     - After the loop completes, the method returns the cumulative score stored in `result`.

### Example
Let's consider an example to illustrate how this works:

```cpp
Solution sol;
int score = sol.scoreOfString("abc");
// Let's break down what happens here step by step:
```

- For the string `"abc"`, the ASCII values are:
  - `a` -> 97
  - `b` -> 98
  - `c` -> 99

- The loop will compute:
  - For `i = 1`: `abs(int('b') - int('a'))` = `abs(98 - 97)` = 1
  - For `i = 2`: `abs(int('c') - int('b'))` = `abs(99 - 98)` = 1

- Summing these values:
  - `result = 0 + 1 + 1` = 2

So, the method will return `2`.

### Summary
The `scoreOfString` method calculates a score for the input string `s` by summing the absolute differences between the ASCII values of consecutive characters. This gives a measure of how "jumpy" the string is in terms of character values.