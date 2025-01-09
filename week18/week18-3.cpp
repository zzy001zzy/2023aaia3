class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.size(),n2=b.size();
        int carry=0;
        vector<int> ans;
        for(int i=n1-1,j=n2-1;i>=0||j>=0;i--,j--){
            if(i<0){
                int now=b[j]-'0'+carry;
                ans.push_back(now%2);
                carry=now/2;
            }
            else if(j<0){
                int now=a[i]-'0'+carry;
                ans.push_back(now%2);
                carry=now/2;
            }
            else{
                int now=a[i]-'0'+b[j]-'0'+carry;
                ans.push_back(now%2);
                carry=now/2;
            }
        }
        if(carry)ans.push_back(carry);
        int n=ans.size();
        string res(n,'0');
        for(int i=ans.size()-1;i>=0;i--){
            res[i]=ans[n-1-i]+'0';
        }
        return res;
    }
};