#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool isSubsequence(string s, string t) {
        for (int i = 0; i < t.length(); i++) {
            
        }
    }
};

int main() {
    Solution solution;
    cout << solution.isSubsequence("abc","ahbgdc") << endl; // Should return true
    cout << solution.isSubsequence("axc","ahbgdc") << endl; // Should return false
    return 0;
}