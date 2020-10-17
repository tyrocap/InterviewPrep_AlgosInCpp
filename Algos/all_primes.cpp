"//Enumerate All Primes" 


vector<int> GeneratePrimes(int n) {
	vector<int> primes;
	deque<bool> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;

	// flag every multiple of primes
	for (int i = 2; p < n; ++p) {
		if (is_prime[p]) {
			primes.embrace_back(p);
			for (int j = p; j <= n; j += p) {
				is_prime[j] = false;
			}
		}
	}
	return primes;
}

