class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        y = []
        x = [1]
        y.append(x)
        for i in range(numRows):
            new = [0]*(i+2)
            y.append(new)
            for j in range(i+1):
                y[i+1][j] = y[i+1][j] + y[i][j]
                y[i+1][j+1] = y[i+1][j+1] + y[i][j]
        return y[:-1]
