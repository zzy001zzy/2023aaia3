#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int n1=a.size(),n2=b.size();
	if(n1>n2)cout<<1;
	else if(n1<n2)cout<<-1;
	else{
		cout<<a.compare(b);
	}
}