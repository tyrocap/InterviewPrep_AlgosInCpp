class binaryHeap() {
private:
	std::vector<T> a;
	int n;

	void bubbleUp(int i) {
		int p = parent(i);
		while (i > 0 && compare(a[i], a[p]) < 0) {
			std::swap(a[i], a[p]);
			i = p;
			p = parent(i);
		}
	}
public:
	bool add(T x) {
		if (n + 1 > a.size()) {
			resize();
		}
		a[n++] = x;
		bubbleUp(n - 1);
		return true;
	}
}