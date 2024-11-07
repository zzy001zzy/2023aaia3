class Solution:
    def setZeroes(self, a: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        row=[]
        col=[]
        n1=len(a)
        n2=len(a[0])
        for i in range(n1):
            for j in range(n2):
                if a[i][j]==0:
                    row.append(i)
                    col.append(j)
        for i in range(n1):
            for j in range(n2):
                if i in row or j in col:a[i][j]=0
        return a