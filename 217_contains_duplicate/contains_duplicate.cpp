#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> set;

        for (int num : nums) {
            if (set.find(num) != set.end()) {
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
    test.push_back(1);
    test.push_back(1);
    test.push_back(3);
    test.push_back(3);
    test.push_back(4);
    test.push_back(3);

    std::cout << solution.containsDuplicate(test) << std::endl;
}
