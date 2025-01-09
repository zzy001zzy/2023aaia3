class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int> ans;
        int i=0,j=0;
        int d=0;
        int di[4]={0,1,0,-1};
        int dj[4]={1,0,-1,0};
        while(ans.size()<m*n){
            ans.push_back(matrix[i][j]);
            matrix[i][j]=999;
            int i2=i+di[d],j2=j+dj[d];
            if(i2<0||j2<0||i2>=m||j2>=n||matrix[i2][j2]==999){
                d=(d+1)%4;
            }
            i+=di[d];
            j+=dj[d];
        }
        return ans;
    }
};