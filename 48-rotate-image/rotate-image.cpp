class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int sizeofMatrix=matrix.size();
        for(int i=0;i<sizeofMatrix;i++){
            for(int j=i+1;j<sizeofMatrix;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<sizeofMatrix;i++){
            int low=0;
            int high=sizeofMatrix-1;
            while(low<high){
                int exchange=matrix[i][low];
                matrix[i][low]=matrix[i][high];
                matrix[i][high]=exchange;
            low++;
            high--;
            }
        }
    }
};