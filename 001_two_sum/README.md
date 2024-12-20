# 001 - Two Sum

## Goal

The purpose of this algorithm is to find the first (or lesser) indexes inside a given array that hold the values required to add into the target integer.

### Examples

```cpp
twoSum(std::vector<int>({6, 1, 9, 2}), 11) // returns [3, 4]
twoSum(std::vector<int>({3, 2, 5, 6}), 8) // returns [0, 2] and not [1, 4]
```

## Explanation

1. Initialize a hashmap to hold the values found.
2. Iterate through the array of numbers.
3. For each number, calculate the required number to reach the target by subtracting the current number from the target.
4. Check if the required number is already in the hashmap:
   - If it is, return the indices of the required number and the current number.
   - If it is not, add the current number and its index to the hashmap.
5. If no such pair is found by the end of the iteration, return an empty vector (must be handled afterwards).

## Code

```cpp
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> found;

        for (int i = 0; i < nums.size(); i++) {
            const int num = nums[i];
            const int required = target - num;

            if (found.find(required) != found.end()) {
                return std::vector<int>({ found[required], i });
            }

            if (found.find(num) == found.end()) {
                found[num] = i;
            }
        }

        return std::vector<int>(); // Returns an empty vector, handle it after
    }
};
```

## Observations

The final result has a **O(n)** time complexity and a **O(n)** space complexity

Fairly easy algorithm, hardest part was thinking about how to add the indexes to the hashmap. The overall runtime and time complexity seems inline with an unsorted array iterating algorithm, so we could say this is the best solution so far.
