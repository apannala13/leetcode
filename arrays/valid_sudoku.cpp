class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int r = 0; r < 9; ++r){
            unordered_set<int> rowset;
            unordered_set<int> colset;
            for(int c = 0; c < 9; ++c){
                if(board[r][c] != '.' && rowset.find(board[r][c]) != rowset.end()){
                    return false;
                }
                rowset.insert(board[r][c]);
                if(board[c][r] != '.' && colset.find(board[c][r]) != colset.end()){
                    return false;
                }
                colset.insert(board[c][r]);
            }
        }
        for(int r = 0; r < 9; r+=3){
            for(int c = 0; c < 9; c+=3){
                unordered_set<int> gridset;
                for(int i = r; i < r + 3; ++i){
                    for(int j = c; j < c + 3; ++j){
                        if(board[i][j] != '.' && gridset.find(board[i][j]) != gridset.end()){
                            return false;
                        }
                        gridset.insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};
