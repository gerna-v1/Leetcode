#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {

        std::unordered_map<char, int> hashmap = std::unordered_map<char, int>();
        std::unordered_map<char, int> hashmap2 = std::unordered_map<char, int>();

        for (int i = 0; i < s.size(); i++) {
            hashmap[s.at(i)]++;
        }

        for (int i = 0; i < t.size(); i++) {
            hashmap2[t.at(i)]++;
        }

        return hashmap == hashmap2;
    }
};