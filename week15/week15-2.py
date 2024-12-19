a=['HELLO','HOLA','HALLO','BONJOUR','CIAO','ZDRAVSTVUJTE']
b=['ENGLISH','SPANISH','GERMAN','FRENCH','ITALIAN','RUSSIAN']
c=1
while(now:=input())and now!='#':
	print(f'Case {c}: ',end='')
	if now not in a:print("UNKNOWN")
	else:print(b[a.index(now)])
	c+=1