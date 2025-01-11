#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        vector<int> aNums = {};     

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                aNums.push_back(nums[i]);
                k++;
            }
        }
        nums = aNums;
        return k;
    }
};  



int main() {
    Solution solution;
    vector<int> test = {0,1,2,2,3,0,4,2};
    cout << solution.removeElement(test,2);
    return 0;
}