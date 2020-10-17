"//isPalindromic" 

bool IsPalindromic(const string& s) {
  // TODO - you fill in here.
    string A;
    for (int i = 0; i < s.size(); ++i) {
        if (isalnum(s[i])) {
            A += s[i];
        }
    }
    for (int j = 0, k = A.size() - 1; j < k; ++j, --k) {
        if (A[j] != A[k]) {
            return false;
        }
    }
  return true;

}
