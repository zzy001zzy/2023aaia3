#include <iostream>
using namespace std;
int f(int a){
	int ans=0;
	while(a>0){
		ans+=a%10;
		a=a/10;
	}
	return ans;
}
int main(){
	int a;
	while(cin>>a){
		if(a==0)break;
		a=f(a);
		cout<<a<<endl;
	}
}