class Solution:
    def calPoints(self, op: List[str]) -> int:
        a=[]
        n=len(op)
        for i in range(n):
            if op[i]=='+':a.append(a[-1]+a[-2])
            elif op[i]=='C':a.pop()
            elif op[i]=='D':a.append(a[-1]*2)
            else:a.append(int(op[i]))
        ans=sum(a)
        return ans