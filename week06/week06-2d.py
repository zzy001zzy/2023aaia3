app=[]
while 1:
	try:
		app.append(int(input()))
		app.sort()
		n=len(app)
		if n%2:print(app[n//2])
		else:print((app[n//2]+app[n//2-1])//2)
	except:
		break