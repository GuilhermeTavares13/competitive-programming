#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = 0;
        for(int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                j++;
            } else if (s[i+1] != ' ' && s[i+1] > 0) {
                j = 0;
            }
        }
        return j;
    }
};


int main() {
    Solution solution;

    cout << solution.lengthOfLastWord("   fly me   to   the moon  ");
    return 0;
}