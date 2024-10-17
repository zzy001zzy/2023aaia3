#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int> a;
	int now;
	while(cin>>now){
		a.push_back(now);
		sort(a.begin(),a.end());
		int n=a.size();
		if(n%2)cout<<a[n/2]<<endl;
		else cout<<(a[n/2]+a[n/2-1])/2<<endl;
	}
}