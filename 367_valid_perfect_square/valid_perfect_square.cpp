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