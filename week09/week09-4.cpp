class Solution {
public:
    double average(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        double total=0;
        for(int i=1;i<n-1;i++)total+=a[i];
        return total/(n-2);
    }
};