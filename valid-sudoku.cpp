class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,int> mp;
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') mp[board[i][j]]++;
                if(mp[board[i][j]] > 1) return false;
            }
            mp.clear();
        }
        for(int j = 0; j < 9; j++) {
            for(int i = 0; i < 9; i++) {
                if(board[i][j] != '.') mp[board[i][j]]++;
                if(mp[board[i][j]] > 1) return false;
            }
            mp.clear();
        }
        for(int k = 0 ; k < 3; k++) {
            for(int l = 0 ; l < 3; l++) {
                for(int i=0;i<3;i++) {
                    for(int j=0;j<3;j++){
                        if(board[3*k+i][3*l+j] != '.')  mp[board[3*k+i][3*l+j]]++;
                        if(mp[board[3*k+i][3*l+j]] > 1) return false;
                    }
                }
                mp.clear();
            }
        }
        return true;
    }
};