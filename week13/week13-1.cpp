#include <iostream>
using namespace std;
int helper(int a,int b){
	return 3;
}
int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		int ans=helper(a,b);
		if(ans==0)cout<<"No carry operation.";
		else if(ans==1)cout<<"1 carry operations.\n";
		else cout<<ans<<"carry operations.\n";
	}
}