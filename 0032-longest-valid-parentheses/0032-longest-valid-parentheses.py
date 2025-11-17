class Solution:


    def longestValidParentheses(self, s: str) -> int:
        # 우선 dp문제를 푼다고 생각해보자
        # 그러면 1칸 뒤로 갈 때마다 둘 중 하나다
        # 해당 값을 포함하는 새로운 길이가 나오던가 vs 안 포함하면 최장 길이 set이 변하지 않는다.
        # 만약에 dp를 안쓴다면? two-pointer를 사용해서 좌우에서 좁혀가기?

        if (len(s) <=1):
            return 0

        dp = [0] * len(s)

        for i in range(1, len(s)):
            if s[i] == ')':
                if (s[i-1] == '('):
                    if (i-2>=0):
                        dp[i] = dp[i-2]+2
                    else:
                        dp[i] += 2
                else:
                    if (i-dp[i-1]-1>=0):
                        if (s[i-dp[i-1]-1] == '('):
                            dp[i] = dp[i-1] + 2 + dp[i-dp[i-1]-2]
        
        return max(dp)