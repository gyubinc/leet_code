class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        dp=[[1]]
        for i in range(rowIndex):
            x = [0]*(i+2)
            for k in range(i+1):
                x[k] += dp[i][k]
                x[k+1] += dp[i][k]
            dp.append(x)
        return dp[-1]