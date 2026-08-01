class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> x(n,vector<int>(n));
        int rowbegin=0,rowend=n-1,count=0;
        int colbegin=0,colend=n-1;
        while(rowbegin<=rowend && colbegin<=colend){
            for(int j=colbegin;j<=colend;j++){
                count++;
                x[rowbegin][j]=count;
            }
            rowbegin++;
            for(int j=rowbegin;j<=rowend;j++){
                count++;
                x[j][colend]=count;
            }
            colend--;
            if(rowbegin<=rowend){
            for(int j=colend;j>=colbegin;j--){
                count++;
                x[rowend][j]=count;
            }
            rowend--;
            }
            if(colbegin<=colend){
            for(int j=rowend;j>=rowbegin;j--){
                count++;
                x[j][colbegin]=count;
            }
            colbegin++;
            }
        }
        return x;
    }
};