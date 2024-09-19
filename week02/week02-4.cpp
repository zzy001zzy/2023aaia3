class Solution {
public:
    char findTheDifference(string s, string t) {
        int d1[256]={},d2[256]={};
        int n1=s.size(),n2=t.size();
        for(int i=0;i<n1;i++){
            d1[s[i]]++;
        }
        for(int i=0;i<n2;i++){
            d2[t[i]]++;
        }
        for(char i='a';i<='z';i++){
            if(d1[i]!=d2[i]) return i;
        }
        return 0;
    }
};
