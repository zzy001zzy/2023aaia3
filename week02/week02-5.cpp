class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return 0;
        int n=s.size();
        int a[256]={},b[256]={};
        for(char i:s){
            a[i]++;
        }
        for(char i:t){
            b[i]++;
        }
        for(char i='a';i<='z';i++){
            if(a[i]!=b[i]) return 0;
        }
        return 1;
    }
};