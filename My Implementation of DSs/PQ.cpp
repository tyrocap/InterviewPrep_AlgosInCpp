// Priority Queue
// by default, pq is ordered by the first element of a pair if pair is used

// regulars
priority_queue<int> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;


// pair pq
priority_queue<pair<int, char>> PQ;
PQ.push(make_pair(some_int, some_char));


priority_queue<int, char, greater<int>> minHeap;
PQ.push(make_pair(some_int, some_char));


