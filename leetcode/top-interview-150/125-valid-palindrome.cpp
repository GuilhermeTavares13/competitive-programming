#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string word, invertedWord;

        for(int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                word += tolower(s[i]);
            }
        }

        for(int i = s.length(); i >= 0; i--) {
            if (isalnum(s[i])) {
                invertedWord += tolower(s[i]);
            }
        }
        return word == invertedWord; 
    }
};


int main() {
    Solution solution;
    cout << solution.isPalindrome("A man, a plan, a canal: Panama") << endl; // Should return true
    cout << solution.isPalindrome("race a car") << endl; // Should return false
    cout << solution.isPalindrome(" ") << endl; // Should return true
    cout << solution.isPalindrome("0P") << endl; // Should return false
    return 0;
}