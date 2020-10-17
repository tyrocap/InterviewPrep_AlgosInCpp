"//spreadsheet encoding" 


int SSDecodeColID(const string& col) {
    // TODO - you fill in here.
    int result = 0;
    for (char c : col) {
        result = result * 26 + c - 'A' + 1;
    }
    return result;
}
