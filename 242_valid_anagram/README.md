# 242 - Valid Anagram

## Goal

The purpose of this algorithm is to determine if two given strings are anagrams of each other. Two strings are anagrams if they contain the same characters with the same frequencies. The strings will only contain lowercase English letters

### Examples

```cpp
isAnagram("anagram", "nagaram") // returns true
isAnagram("rat", "car") // returns false
```

## Explanation

1. Initialize two hashmaps to count the frequency of each character in both strings.
2. Iterate through the first string and populate the first hashmap with character frequencies.
3. Iterate through the second string and populate the second hashmap with character frequencies.
4. Compare the two hashmaps:
   - If they are equal, return true as the strings are anagrams.
   - If they are not equal, return false as the strings are not anagrams.

## Code

```cpp
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> hashmap;
        std::unordered_map<char, int> hashmap2;

        for (int i = 0; i < s.size(); i++) {
            hashmap[s.at(i)]++;
        }

        for (int i = 0; i < t.size(); i++) {
            hashmap2[t.at(i)]++;
        }

        return hashmap == hashmap2;
    }
};
```

## Observations

- **Time Complexity**: **O(n)**, where n is the length of the strings. We iterate through each string once to populate the hashmaps and then compare the hashmaps.
- **Space Complexity**: **O(1)**, as the hashmaps will contain at most 26 entries (one for each letter of the alphabet) if the strings contain only lowercase English letters.

Not really the hardest code, however it does help me better understand some things about C++'s implementation of hashmaps (or, unordered maps)
