class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& a) {
        int x0=a[0][0],y0=a[0][1];
        int x1=a[1][0],y1=a[1][1];
        int n=a.size();
        for(int i=2;i<n;i++){
            int x2=a[i][0],y2=a[i][1];
            if((x1-x0)*(y2-y0)!=(y1-y0)*(x2-x0))return 0;
        }
        return 1;
    }
};