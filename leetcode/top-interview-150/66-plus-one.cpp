#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> number = digits;
        for(int i = digits.size() - 1; i >= 0; i--) {
            if (number[i] + 1 < 10) {
                number[i] += 1; 
            }
        }
        
        for(int i = 0; i < number.size(); i++){
            cout << number[i] << endl;
        }

        return number;
    }
};



int main() {
    Solution solution;

    vector<int> test = {1,2,4};

    // solution.plusOne(test); // Should return [1,2,5]

    // test = {4,3,2,1};
    // solution.plusOne(test); // Should return [4,3,2,2]

    // test = {9};
    solution.plusOne(test); // Should return [1,0]

    // test = {4,3,2,9};
    // solution.plusOne(test); // Should return [4,3,3,0]
     

    return 0;
}
