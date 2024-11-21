class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=0;
        for(auto i:nums){
            if(i<0)ans++;
            else if(i==0)return 0;
        }
        if(ans%2)return -1;
        return 1;
    }
};