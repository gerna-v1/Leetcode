# 367 - Valid Perfect Square

## Goal

The purpose of this algorithm is to determine if a given integer is a perfect square.

### Examples

```cpp
isPerfectSquare(16); // returns true
isPerfectSquare(14); // returns false
```

## Explanation

1. Initialize an unordered map to store the squares of integers.
2. Iterate through the integers from 0 to the given number.
3. For each integer, calculate its square and store it in the map.
4. Check if the given number is in the map:
   - If it is, return true as the number is a perfect square.
   - If the square of the current integer exceeds the given number, break the loop.
5. If no perfect square is found by the end of the iteration, return false.

## Code

```cpp
#include <unordered_map>
class Solution {
public:
    bool isPerfectSquare(int num) {

        std::unordered_map<unsigned long, unsigned int> squares = std::unordered_map<unsigned long, unsigned int>();

        for (int i = 0; i <= num; i++) {
           unsigned long square = (unsigned long) i * i;
           squares[square] = i;

           if (squares.find(num) != squares.end()) {
               return true;
           }
           else if (square > (unsigned int) num) {
               break;
           };
        }

        return false;
    }
};
```

## Observations

- **Time Complexity**: **O(sqrt(n))**, where n is the given number. We iterate through the integers up to the square root of the given number.
- **Space Complexity**: **O(sqrt(n))**, as we store the squares of the integers in the map.

### Note

The current implementation is not optimal and can be improved. The solution will be updated when a better and more efficient solution is found.
