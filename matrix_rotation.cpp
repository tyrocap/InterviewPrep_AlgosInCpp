"//rotate_2D_array" 

void RotateMatrix(vector<vector<int>>* square_matrix_ptr) {
    // TODO - you fill in here.
    vector<vector<int>>& board = *square_matrix_ptr;
    const int size = board.size();
    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            std::swap(board[i][j], board[j][i]);
        }
    }
    for (auto& row : board) {
        std::reverse(row.begin(), row.end());
    }

    return;
}
