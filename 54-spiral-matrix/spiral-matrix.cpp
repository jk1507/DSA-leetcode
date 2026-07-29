class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int colbegin=0, colend=matrix[0].size()-1;
    int rowbegin=0,rowend=matrix.size()-1;
    int totalElements=colend*rowend;
    vector<int> x;
    if(matrix.empty()){
        return x;
    }
    while(colbegin<=colend && rowbegin<=rowend){
        for(int i=colbegin;i<=colend;i++){
            x.push_back(matrix[rowbegin][i]);
        }
        rowbegin++;
        for(int i=rowbegin;i<=rowend;i++){
            x.push_back(matrix[i][colend]);
        }
        colend--;
        if(rowbegin<=rowend){
        for(int i=colend;i>=colbegin;i--){
            x.push_back(matrix[rowend][i]);
        }
        rowend--;
        }
        if(colbegin<=colend){
        for(int i=rowend;i>=rowbegin;i--){
            x.push_back(matrix[i][colbegin]);
        }
        colbegin++;
    }  
    }
    return x;    
    }
};