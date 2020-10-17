"//Valid sudoku" 


bool SolveSudoku(vector<vector<int>>* partial_assignment) {
    // TODO - you fill in here.
    vector<vector<int>>& board = *partial_assignment;
    std::map<int, char> duplic;

    // Rows check
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            if (duplic.find(board[i][j]) != duplic.end()) {
                return false;
            }
            if (board[i][j] != 0) {
                duplic[board[i][j]] = 'A';
            }
        }
        duplic.clear();
    }
    // Cols check
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            if (duplic.find(board[j][i]) != duplic.end()) {
                return false;
            }
            if (board[i][j] != 0) {
                duplic[board[j][i]] = 'A';
            }
        }
        duplic.clear();
    }

    // 3*3 Check
    for (int a : { 0, 3, 6 }) {
        for (int b : { 0, 3, 6 }) {
            for (int k = a; k < a + 3; ++k) {
                for (int l = b; l < b + 3; ++l) {
                    if (duplic.find(board[k][l]) != duplic.end()) {
                        return false;
                    }
                    if (board[k][l] != 0) {
                        duplic[board[k][l]] = 'A';
                    }
                }
            }
            duplic.clear();
        }
    }
    return true;
}

