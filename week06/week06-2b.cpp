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
		for(int i:a){
			cout<<i<<' ';
		}
		cout<<endl;
	}
}