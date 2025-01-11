#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0, holdCount = 0, count = 0, number = 0;
        stable_sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                majority = nums[i];
                holdCount = 1;
                count = 1;
                number = majority;
            }
            else {
                if (number != nums[i]) {
                    number = nums[i];
                    count = 0;
                } 
                else {
                    count++;
                }
                if(count >= holdCount) {
                    holdCount = count;
                    majority = number;
                }
            }
            
        }
        return majority;
    }
};

int main() {
    Solution solution;
    vector<int> test = {1};
    cout << solution.majorityElement(test);
    return 0;
}