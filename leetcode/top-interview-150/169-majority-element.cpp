#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0, hold = 0, count = 0, holdcount = 0;
        for (int j = 0; j < nums.size(); j++) {
            hold = nums[j];
            for(int i = 0; i < nums.size(); i++) {
                if(hold = nums[i]) {
                    count++;
                }
            }
            if (holdcount == 0) {
                majority = hold;
                holdcount = count;
            }
            else {
                if(count > holdcount) {
                    majority = hold;
                    holdcount = count;
                }
            }
            count = 0;
        }
        return majority;
    }
};

int main() {
    Solution solution;
    vector<int> test = {3,2,3};
    cout << solution.majorityElement(test);
    
    return 0;
}