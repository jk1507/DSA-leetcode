class Solution {
public:
    void increment(vector<vector<int>>& x,int a, int b){
        int q=x.size();
        int w=x[0].size();
        for(int i=0;i<w;i++){
            x[a][i]+=1;
        }
        for(int i=0;i<q;i++){
            x[i][b]+=1;
        }
    }
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> x(m,vector<int>(n,0));
        int a=indices.size();
        int b=indices[0].size();
        for(int i=0;i<a;i++){
                increment(x,indices[i][0],indices[i][1]);
            }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(x[i][j]%2!=0) count++;
            }
        }
        return count;
    }
};