#include <iostream>
#include <vector>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		vector<int> ans;
		while(a>=1){
			ans.push_back(a);
			if(a%b)break;
			a/=b;
		}
		if(a==1){
			for(auto i:ans)cout<<i<<' ';
		}
		else cout<<"Boring!\n";
	}
}