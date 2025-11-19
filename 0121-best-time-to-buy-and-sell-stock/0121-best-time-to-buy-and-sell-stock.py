class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # dp라는 사실을 까먹지 말아보자
        # 새로운 값이 추가되면 어떻게 될까
        # 그 값에 팔지를 정하면 된다.
        max_profit = 0
        min_val = 10000

        for val in prices:
            max_profit = max(max_profit, val-min_val)
            if (val < min_val) : min_val = val
        
        return max_profit

            