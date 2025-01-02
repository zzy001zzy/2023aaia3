class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        string vowel="aeiou";
        vector<int> prefix;
        int now=0;
        for(auto word:words){
            int yes=0;
            for(auto v:vowel){
                if(word[0]==v)yes++;
                if(word.back()==v)yes++;
                if(yes==2)break;
            }
            if(yes==2)now++;
            prefix.push_back(now);
        }
        vector<int> ans;
        for(int k=0;k<queries.size();k++){
            int i=queries[k][0];
            int j=queries[k][1];
            if(i==0){
                ans.push_back(prefix[j]);
                continue;
            }
            ans.push_back(prefix[j]-prefix[i-1]);
        }
        return ans;
    }
};