class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            n=-n;
            x=1/x;
        }
        double ans=1;
        for(int i=0;i<n;i++){
            ans*=x;
        }
        return ans;
    }
};