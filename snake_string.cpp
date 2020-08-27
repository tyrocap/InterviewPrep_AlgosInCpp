
"//Snake string" 
string SnakeString(const string& s) {
  // TODO - you fill in here.
    string A;
    for (int i = 1; i < s.size(); i = i + 4) {
        A += s[i];
    }
    for (int j = 0; j < s.size(); j = j + 2) {
        A += s[j];
    }
    for (int k = 3; k < s.size(); k = k + 4) {
        A += s[k];
    }
  return A;

}


