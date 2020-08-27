

//Look and Say" 

string LookAndSayHelper(const string& s) {
    string result;
    for (int i = 0; i < s.size(); ++i) {
        int count = 1;
        while (i + 1 < s.size() && s[i] == s[i+1]) {
            ++i, ++count;
        }
        result += std::to_string(count) + s[i];
    }
    return result;
}



string LookAndSay(int n) {
  // TODO - you fill in here.

    string s = "1";
    for (int i = 1; i < n; ++i) {
        s = LookAndSayHelper(s);
    }
    return s;
 
}








