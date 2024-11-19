#include <vector>
#include <unordered_map>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> found = std::unordered_map<int, int>();

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