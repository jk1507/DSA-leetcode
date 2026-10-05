class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> x(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0|| j==0) x[i][j]=1;
                else x[i][j]=x[i-1][j]+x[i][j-1];
            }
        }
        return x[m-1][n-1];
    }
};