class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp= s+s;//製造規律
        return temp.substr(1,temp.size()-2).find(s)!=-1;//如果這個規律被我去掉了頭尾還能找到一樣的代表是對的
    }
};