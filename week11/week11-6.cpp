class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        sort(a.begin(),a.end());
        int n1=a.size();
        vector<int> ans;
        for(int i=0;i<n1-1;i++){
            int now=a[i];
            int next=a[i+1];
            ans.push_back(abs(next-now));
        }
        int n2=ans.size();
        for(int i=0;i<n2-1;i++){
            int now=ans[i];
            int next=ans[i+1];
            if(now!=next)return 0;
        }
        return 1;
    }
};