class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> row;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(row.count(board[i][j])) return false;
                row.insert(board[i][j]);
            }
        }

        for(int i=0;i<9;i++){
            unordered_set<char> col;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.') continue;
                if(col.count(board[j][i])) return false;
                col.insert(board[j][i]);
            }
        }
        for(int blockRow=0;blockRow<3;blockRow++){
            for(int blockCol=0;blockCol<3;blockCol++){
                int startRow=blockRow*3;
                int startCol=blockCol*3;
                unordered_set<char> duplicate;
                for(int i=startRow;i<startRow+3;i++){
                    for(int j=startCol;j<startCol+3;j++){
                        if(board[i][j]=='.') continue;
                        if(duplicate.count(board[i][j])) return false;
                        duplicate.insert(board[i][j]);
                    }
                }
            }
        }
          return true;
        }
};