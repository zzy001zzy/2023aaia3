#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["���|��"]=12750300;
    m["�i�n�f"]=12750794;
    cout<<"���|�۪��Ǹ��O:"<<m["���|��"]<<endl;
    cout<<"�i�n�f���Ǹ��O:"<<m["�i�n�f"]<<endl;
}
