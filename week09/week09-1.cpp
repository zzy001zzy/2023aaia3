class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int n1=acc.size(),n2=acc[0].size();
        int ans=0;
        for(int i=0;i<n1;i++){
            int sum=0;
            for(int j=0;j<n2;j++){
                sum+=acc[i][j];
            }
            if(ans<sum) ans=sum;
        }
        return ans;
    }
};