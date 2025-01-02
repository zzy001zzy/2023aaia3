class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int big=0;
        int small=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1])big=1;
            if(nums[i]<nums[i+1])small=1;
        }
        if(big&&small)return 0;
        return 1;
    }
};