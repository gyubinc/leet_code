#include <set>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int now = 0;
        for (int i=0; i<s.size(); i++){
            now = 0;
            set<char> imsi;
            for (int j=i; j<s.size(); j++){
                if (imsi.find(s[j]) == imsi.end() ){
                    imsi.insert(s[j]);
                    now++;
                }else break;
            }
            if (now > longest) longest = now;
        }

        return longest;
    }
};