#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


class Solution {
public:                 // aza      abzba   
    bool isSubsequence(string s, string t) {
        string subword;
        int pos = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = pos; j < t.length(); j++) {
                if (s[i] == t[j]) {
                    subword += t[j];
                    pos = j + 1;
                    break;
                }
            }
        }
        
        return s == subword;
    }
};

int main() {
    Solution solution;
    // cout << solution.isSubsequence("abc","ahbgdc") << endl; // Should return true
    // cout << solution.isSubsequence("axc","ahbgdc") << endl; // Should return false
    // cout << solution.isSubsequence("acb","ahbgdc") << endl; // Should return false
    // cout << solution.isSubsequence("bb","ahbgdc") << endl; // Should return false
    cout << solution.isSubsequence("aza","abzba") << endl; // Should return false
    return 0;
}