#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(char i:s){
		if(i!='2') cout<<i;
	}
	cout<<"\n";
}
