#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        vector<int> aNums = {}; 
        bool found = false;
        for(int i = 0; i < nums.size(); i++) {

            for(int j = 0; j < aNums.size(); j++) {
                if(nums[i] == aNums[j]) {
                    found = true;
                }
            }

            if (!found)  {
                aNums.push_back(nums[i]);
                k++;
            }
            found = false;
        }
        nums = aNums;
        for(int i = 0; i < aNums.size(); i++) {
            cout << nums[i];
        }  
        return k;
    }
};

int main() {
    Solution solution;

    vector<int> teste = {1,1,2};
    cout << solution.removeDuplicates(teste);
    return 0;
}