#include <iostream>
#include <string.h>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> aNums = {};
        for (int i = 0; i < m; i++) {
            aNums.push_back(nums1[i]);
        }
         for (int i = 0; i < n; i++) {
            aNums.push_back(nums2[i]);
        }
        std::sort(aNums.begin(),aNums.end());

        nums1 = aNums;
     }
};

int main() {
    Solution solution;
    vector<int> test = {1,2,3,0,0,0};
    vector<int> test2 = {2,5,6};

    solution.merge(test,3,test2,3);

    return 0;
}