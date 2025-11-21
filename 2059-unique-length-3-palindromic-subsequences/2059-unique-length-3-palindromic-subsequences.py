import collections
from collections import Counter

class Solution:
    def countPalindromicSubsequence(self, s: str) -> int:
        first = dict()
        last = dict()
        for i in range(len(s)):
            last[s[i]] = i
            if (s[i] not in first):
                first[s[i]] = i
        ans = 0
        print(first, last)
        for key in first.keys():
            if first[key] < last[key]:
                j = set()
                for k in range(first[key]+1, last[key]):
                    j.add(s[k])
                ans += len(j)
                

        
        
        return ans
        
