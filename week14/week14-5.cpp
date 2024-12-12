#include <iostream>
#include <vector>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		while(a){
			cout<<a<<' ';
			a/=b;
		}
		cout<<"Boring!\n";
	}
}