class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        memo = {}

        def dp(si, pi):
            if (si, pi) in memo:
                return memo[(si, pi)]

            if pi == len(p):
                ans = si == len(s)
            else:
                first_match = si < len(s) and (p[pi] == s[si] or p[pi] == '.')
                if pi+1 < len(p) and p[pi+1] == '*':
                    ans = dp(si, pi+2) or (first_match and dp(si+1, pi))
                else:
                    ans = first_match and dp(si+1, pi+1)

            memo[(si, pi)] = ans
            return ans

        return dp(0, 0)