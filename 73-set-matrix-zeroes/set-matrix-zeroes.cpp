class Solution {
public:
    /*void operation(vector<vector<int>>& matrix,int x,int y){
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<n;i++){
            matrix[x][i]=0;
        }
        for(int i=0;i<m;i++){
            matrix[i][y]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    operation(matrix,i,j);
                }
            }
        }
        */
        void setZeroes(vector<vector<int>>& matrix){
        int m=matrix.size();
        int n=matrix[0].size();
        vector<bool> row(m,false);
        vector<bool> col(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i] || col[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};