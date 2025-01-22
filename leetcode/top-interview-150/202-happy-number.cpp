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
        for(int i = 0; i < num.length(); i++) {
            
            sum += num[i];
            cout << num[i] << endl;
        }
        
        cout << sum << endl;

        return false;
    }
};

int main() {
    Solution solution;
    cout << solution.isHappy(19) << endl; // Should return true
    // cout << solution.isHappy(2) << endl; // Should return false
    return 0;
}