class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> rows(m,1), cols(n,1);  //row(m,1) 新增大小為m*n的空間，假設一開始都是1
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){//如果遇到0
                    rows[i]=0;//紀錄第幾行有沒有0
                    cols[j]=0;//紀錄第幾列有沒有0
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i]==0 || cols[j]==0){//如果這行或這列的某個值為0
                    matrix[i][j]=0;//則這一格變成0
                }
            }
        }
    }
};