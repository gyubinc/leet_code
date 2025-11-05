#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string expandFromCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        // 범위가 벗어나기 전의 유효 부분 반환
        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {
        if (s.empty()) return "";

        string longest = s.substr(0, 1);
        for (int center = 0; center < s.size(); center++) {
            string odd = expandFromCenter(s, center, center);
            string even = expandFromCenter(s, center, center + 1);

            if (odd.size() > longest.size()) longest = odd;
            if (even.size() > longest.size()) longest = even;
        }
        return longest;
    }
};