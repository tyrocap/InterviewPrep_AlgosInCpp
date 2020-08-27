"//Roman to Integer" 


int RomanToInteger(const string& s) {
    // TODO - you fill in here.
    map<char, int> roman_map;
    roman_map['I'] = 1;
    roman_map['V'] = 5;
    roman_map['X'] = 10;
    roman_map['L'] = 50;
    roman_map['C'] = 100;
    roman_map['D'] = 500;
    roman_map['M'] = 1000;
    int ans = 0;
    for (int i = 0; i < s.size(); ++i) {
        ans += roman_map[s[i]];
        if (i > 0 && roman_map[s[i]] > roman_map[s[i - 1]]) {
            if (s[i - 1] == 'I') {
                ans -= 2;
            }
            if (s[i - 1] == 'X') {
                ans -= 20;
            }
            if (s[i - 1] == 'C') {
                ans -= 200;
            }
        }
    }
	return ans;
}

