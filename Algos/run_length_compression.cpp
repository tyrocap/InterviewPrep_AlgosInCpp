"//run length compression" 


string Decoding(const string &s) {
  // TODO - you fill in here.
    string result;
    int count = 0;
    for (const char& c : s) {
        if (isdigit(c)) {
            count = count * 10 + c - '0';
        }
        else {
            result.append(count, c);
            count = 0;
        }
    }
  return result;
}
string Encoding(const string &s) {
  // TODO - you fill in here.
    string result;
    for (int i = 1, count = 1; i <= s.size(); ++i) {
        if (i == s.size() || s[i] != s[i - 1]) {
            result += std::to_string(count) + s[i - 1];
            count = 1;
        }
        else {
            ++count;
        }
    }
  return result;

}

