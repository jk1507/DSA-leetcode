class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        /*int sum1=0,sum2=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> result(m,vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int OneRow=0;
                int ZeroRow=0;
                int k=0;
                int OneCol=0;
                int ZeroCol=0;
                for(int x=0;x<n;x++){
                if(grid[i][x]==0){
                    ZeroRow++;
                }
                if(grid[i][x]==1){
                    OneRow++;
                }
                }
          
            while(k<m){
                if(grid[k][j]==0){
                    ZeroCol++;
                }
                if(grid[k][j]==1){
                    OneCol++;
                }
                k++;
                
            }
             sum1=OneRow+OneCol;
             sum2=ZeroRow+ZeroCol;
            int ans=sum1-sum2;
            result[i][j]=ans;
    }
    }
    return result;
    }*/
    int m=grid.size();
    int n=grid[0].size();
    vector<int> OneRow(m);
    vector<int> OneCol(n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                OneRow[i]++;

                OneCol[j]++;
        }
    }
    }
    vector<vector<int>> result(m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[i][j]=OneRow[i]+OneCol[j]-(n-OneRow[i]+m-OneCol[j]);
        }
    }
    return result;
    }
};