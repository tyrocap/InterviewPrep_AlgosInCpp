// Priority Queue
// by default, pq is ordered by the first element of a pair if pair is used


// maxHeap
priority_queue<pair<int, char>> PQ;
// add
PQ.push(make_pair(some_int, some_char));


// minHeap
priority_queue<int, char, greater<int>> minHeap;
// add
PQ.push(make_pair(some_int, some_char));



int bfs(vector<vector<int>>& A, vector<vector<int>> houses, int i, int j, int K) {
	if (i < 0 || i > A.size() - 1 || j < 0 || j > A[0].size() - 1 || A[i][j] == 1) {
		return 0;
	}

}




int solution(int K, vector<vector<int>>& A) {
	if (A.size() < 1) return 0;
	int numStores = 0;
	// find houses
	vector<vector<int>> houses;
	for (int i = 0; i < A.size(); ++i) {
		for (int j = 0; j < A[0].size(); ++j) {
			if (A[i][j] == 1) {
				houses.push_back({ i, j });
			}
		}
	}

	for (int i = 0; i < A.size(); ++i) {
		for (int j = 0; j < A[0].size(); ++j) {
			numStores += bfs(A, houses, i, j, K);
		}
	}
	return numStores;
}