class Solution {
public:
    double help(double x,long long int n){
        if(n==0)return 1;
        double now=help(x,n/2);
        if(n%2==0)return now*now;
        else return now*now*x;
    }
    double myPow(double x,long long int n) {
        if(n<0){
            n=-n;
            x=1/x;
        }
        return help(x,n);
    }
};