"//Is valid parenthesization" 
bool IsWellFormed(const string& s) {
    // TODO - you fill in here.
    std::stack<char> A;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            A.emplace(s[i]);
        }
        else {
            if (A.empty()) {
                return false;
            }
            if ((s[i] == ')' && A.top() != '(') ||
                (s[i] == '}' && A.top() != '{') ||
                (s[i] == ']' && A.top() != '[')) {
				return false;
			}
            A.pop();
        }
    }
    return A.empty();
}
