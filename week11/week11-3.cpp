#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["蔡育倫"]=12750300;
    m["張緯宸"]=12750794;
    cout<<"蔡育倫的學號是:"<<m["蔡育倫"]<<endl;
    cout<<"張緯宸的學號是:"<<m["張緯宸"]<<endl;
}
