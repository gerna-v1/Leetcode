#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        std::string number = "";

        for (int d : digits) {
            number += (char) d + '0';
        }

        int integer = std::stoi(number);

        integer++;

        std::string number2 = std::to_string(integer);

        std::vector<int> result = std::vector<int>();

        for (int i = 0; i < number2.length(); i++) {
            char digit = number2.at(i);
            result.push_back(digit - '0');
        }

        return result;
    }
};