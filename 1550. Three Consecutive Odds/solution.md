Here is an improved version of your code along with an explanation:

```cpp
class Solution {
public:
    // This function checks if a number is odd
    bool isOdd(int num){
        return num % 2 != 0;
    }

    // This function checks if there are three consecutive odd numbers in the array
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();

        // Loop through the array with a window of size 3
        for (int i = 0; i <= n - 3; ++i) {
            // Check if the current window contains three consecutive odd numbers
            if (isOdd(arr[i]) && isOdd(arr[i + 1]) && isOdd(arr[i + 2])) {
                return true;
            }
        }

        // Return false if no such window is found
        return false;
    }
};
```

### Explanation:

1. **Simplifying `isOdd` Method**:
    - The `isOdd` function checks if a number is odd by using the modulo operator. If `num % 2` is not equal to 0, the number is odd. This function is already efficient, but we can make it more concise by directly returning the result of the condition.

2. **Optimizing the `threeConsecutiveOdds` Method**:
    - **Initialization**: The size of the array `n` is calculated once and stored in a variable for efficiency.
    - **Loop Optimization**: Instead of maintaining three separate indices (`i`, `j`, `k`), use a single index `i` to iterate through the array. The loop runs while `i <= n - 3` to ensure there are at least three elements left to check.
    - **Check for Consecutive Odds**: In each iteration, check if the elements at indices `i`, `i + 1`, and `i + 2` are all odd. If they are, return `true` immediately.
    - **Return False if No Consecutive Odds**: If the loop completes without finding three consecutive odd numbers, return `false`.

This revised code is more readable, concise, and efficient, following best practices for C++ programming.