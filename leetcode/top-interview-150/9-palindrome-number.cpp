#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        string anotherNum = "";
        string num = to_string(x);

        for (int i = num.length() - 1; i >= 0; i--) {
            anotherNum += num[i];
        }

        return anotherNum == num;
    }
};

int main() {
    Solution solution;

    cout << solution.isPalindrome(121) << endl; // Should return true 
    cout << solution.isPalindrome(-121) << endl; // Should return false 
    cout << solution.isPalindrome(10) << endl; // Should return false 
    return 0;
}