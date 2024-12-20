# 066 - Plus One

## Goal

The purpose of this algorithm is to take an array of integers where each index represents a digit in the number, and return an array containing the same number (in digits) + 1.

### Examples

```cpp
plusOne(std::vector<int>({9, 9, 9})); // returns [1, 0, 0, 0]
plusOne(std::vector<int>({2, 1, 3, 6})); // returns [2, 1, 3, 7]
```

## Explanation

1. Get the number of digits inside the array.
2. Iterate through the array of digits, from the last digit to the first one.
3. For each number, add one to the number.
   - If the sum equals 10 and the current index isn't the start of the string, we set the current digit to 0.
   - If it's not, the current digit becomes the sum and the iteration breaks.
4. If the iteration gets to the first digit of the array and the sum is 10, set the first digit to 1 and append a 0 to the end of the array.

## Code

```cpp
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();

        for (int i = digits.size() - 1; i >= 0; i--) {
            int number = digits[i] + 1;
            if (number == 10 && i != 0) {
                digits[i] = 0;
            }
            else {
                digits[i] = number;
                break;
            }
        }
        if (digits[0] == 10) {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};

```

## Observations

### Current Solution

- Time Complexity: **O(n)**, where n is the number of digits in the array.
- Space Complexity: **O(1)**, as the modification happens in place

### Previous Solution (Using Strings)

The previous solution converted the array of digits into a string, performed the addition, and then converted the string back into an array of digits. Here is the code for the previous solution:

```cpp
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        std::string number = "";

        for (int d : digits) {
            number += std::to_string(d);
        }

        int carry = 1;
        for (int i = number.size() - 1; i >= 0; i--) {
            int sum = (number[i] - '0') + carry;
            if (sum == 10) {
                number[i] = '0';
                carry = 1;
            }
            else {
                number[i] = sum + '0';
                carry = 0;
                break;
            }
        }

        if (carry == 1) {
            number = '1' + number;
        }

        std::vector<int> result;
        for (char c : number) {
            result.push_back(c - '0');
        }

        return result;
    }
};
```

- Time Complexity: **O(n)**, where n is the number of digits in the array.
- Space Complexity: **O(n)**, as we are creating a new string and a new array to store the result.

The current solution is more efficient in terms of space complexity as it modifies the input array in place, whereas the previous solution required additional space for the string and the result array.

Aditionally, the previous solution needed to iterate multiple times to construct the strings or arrays necessary for each operation, creating another performance overhead.

---

This was a fun algorithm, specially the previous solution where I employed an integer-to-string-to-integer strategy, that didn't work out too well because of the extra memory used, and the hacky way that the numbers were added. Current solution feels cleaner and better performant.
