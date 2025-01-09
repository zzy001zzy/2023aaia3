class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        int n=pref.size();
        for(auto word:words){
            if(pref==word.substr(0,n))ans++;
        }
        return ans;
    }
};