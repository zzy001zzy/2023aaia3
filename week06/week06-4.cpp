class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int> a;
        int n=op.size();
        for(int i=0;i<n;i++){
            if(op[i]=="+") a.push_back(a[a.size()-1]+a[a.size()-2]);
            else if(op[i]=="C") a.pop_back();
            else if(op[i]=="D") a.push_back(a.back()*2);
            else a.push_back(stoi(op[i]));
        }
        int ans=0;
        for(int i=0;i<a.size();i++){
            ans+=a[i];
        }
        return ans;
    }
};