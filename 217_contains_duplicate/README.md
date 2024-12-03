# 217 - Contains Duplicate

## Goal

The purpose of this algorithm is to determine if a given array of integers contains any duplicates.

### Examples

```cpp
std::vector<int>({1, 2, 3, 4}) // returns false
std::vector<int>({1, 2, 3, 1}) // returns true
```

## Explanation

1. Initialize an unordered set to keep track of the numbers we have seen.
2. Iterate through the array of numbers.
3. For each number, check if it is already in the set:
   - If it is, return true as we have found a duplicate.
   - If it is not, add the number to the set.
4. If no duplicates are found by the end of the iteration, return false.

## Code

```cpp
#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> set;

        for (int num : nums) {
            if (set.find(num) == set.end()) {
                set.insert(num);
                continue;
            }

            return true;
        }

        return false;
    }
};

int main()
{
    Solution solution = Solution();
    std::vector<int> test = std::vector<int>();

    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);

    std::cout << solution.containsDuplicate(test) << std::endl;
}
```

## Observations

- Time Complexity: **O(n)**, where n is the number of elements in the array.
- Space Complexity: **O(n)**, as we are using an unordered set to store the elements.`

This is a very simple algorithm where we the only thing we're doing is translating the array to a set, and making sure the set has unique values. As this was my first Leetcode solution, the `main()` with a test is included inside the source code for the solution, however this doesn't get repeated on any other solution.
