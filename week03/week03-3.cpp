#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"�п�J�@�Ӧr��,�������঳�Ů�";
    cin>>s;
    cout<<"�r��O"<<s<<"�����׬O"<<s.length()<<endl;
    for(int i=0;i<s.length();i++){///for(char c:s)
        cout<<s[i]<<endl;
    }
}
