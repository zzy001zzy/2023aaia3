a=list(map(int,input().split()))
b=a[-1]
for i in range(2):
	a.pop()
ans=0
for i in a:
	if b==i:ans+=1
print(ans)