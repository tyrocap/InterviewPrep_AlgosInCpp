"//pascal triangle" 

vector<vector<int>> GeneratePascalTriangle(int num_rows) {
    // TODO - you fill in here
    vector<vector<int>> pt;
    for (int i = 1; i <= num_rows; ++i) {
        vector<int> row(i, 0);
        for (int j = 0; j < i; ++j) {
            if (j == 0 || j == i - 1) {
                row[j] = 1;
            }
            else {
                // current cell value is equal to sum of two cells right above
                // i - 2 => above row (i starts from 1). j - 1, j => right above cells in that row 
                row[j] = pt[i - 2][j - 1] + pt[i - 2][j];
            }
        }
        pt.push_back(row);

    }
    return pt;
}