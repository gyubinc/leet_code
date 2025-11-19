class Solution:
    def countBits(self, n: int) -> List[int]:
        answer_list = []
        for i in range(n+1):
            x = 0
            for j in format(i, 'b'):
                if (j == '1'):
                    x+=1
            answer_list.append(x)


        return answer_list