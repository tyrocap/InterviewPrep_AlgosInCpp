"// Next permutation" 
#include <vector>

#include "test_framework/generic_test.h"
using namespace std;
vector<int> NextPermutation(vector<int> perm) {
    // TODO - you fill in here.
    int k = perm.size() - 2;
    while (k >= 0 && perm[k] >= perm[k + 1]) {
        --k;
    }
    if (k == -1) {
        return {}; // perm is the last
    }
    int j = perm.size() - 1;
    while (j >= 0 && perm[k] >= perm[j]) {
        --j;
    }
    swap(perm[j], perm[k]);
    reverse(perm.begin() + k + 1, perm.end());
    return perm;
}
