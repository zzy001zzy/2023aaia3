#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"請輸入一個字串,中間不能有空格";
    cin>>s;
    cout<<"字串是"<<s<<"的長度是"<<s.length()<<endl;
    for(int i=0;i<s.length();i++){///for(char c:s)
        cout<<s[i]<<endl;
    }
}
