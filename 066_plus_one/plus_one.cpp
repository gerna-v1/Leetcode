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

// Previous solution, using strings:

/* class Solution {
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
            number.insert(number.begin(), '1');
        }

        std::vector<int> result;
        for (char c : number) {
            result.push_back(c - '0');
        }

        return result;
    }
}; */