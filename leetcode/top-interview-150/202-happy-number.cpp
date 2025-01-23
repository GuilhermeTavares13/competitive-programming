#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        string num = to_string(n);
        int sum = 0;
        int c = 0;
        while((sum != 1) && (c < 10)) {
            sum = 0;
            for(int i = 0; i < num.length(); i++) {
                sum += pow((int) num[i] - 48,2); // ASCII numbers starts from 48
            }
            num = to_string(sum);
            c++;
        }
        return sum == 1;
    }
};

int main() {
    Solution solution;
    // cout << solution.isHappy(19) << endl; // Should return true
    cout << solution.isHappy(2) << endl; // Should return false
    // cout << solution.isHappy(19) << endl; // Should return true
    // cout << solution.isHappy(32) << endl; 
    return 0;
}