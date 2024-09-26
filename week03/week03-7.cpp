#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> a;
	int n;
	while(cin>>n&&n){
		a.push_back(n);
	}
	cin>>n;
	int ans=0;
	for(auto i:a){
		if(n==i) ans++;
	}
	cout<<ans<<endl;
}