class Solution {
public:
    int diagonalSum(vector<vector<int>>& a) {
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=a[i][i];
            ans+=a[i][n-1-i];
        }
        if(n%2)ans-=a[n/2][n/2];
        return ans;
    }
};