#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // Step 1: If the two words have different lengths, they can't be close
        if (word1.length() != word2.length()) {
            return false;
        }

        // Step 2: Count the frequency of each character in both words
        vector<int> freq1(26, 0), freq2(26, 0);
        vector<int> char1(26, 0), char2(26, 0);

        for (char c : word1) {
            freq1[c - 'a']++;
            char1[c - 'a'] = 1;
        }

        for (char c : word2) {
            freq2[c - 'a']++;
            char2[c - 'a'] = 1;
        }

        // Step 3: Check if the two words have the same set of characters
        if (char1 != char2) {
            return false;
        }

        // Step 4: Check if the frequency of characters can be transformed
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};


