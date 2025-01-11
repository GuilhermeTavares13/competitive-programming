#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestCommonPrefix = "";
        vector<char> aStrs = {};
        vector<vector<char>> bStrs = {};
        int smallestWord = 0;
        for(int i = 0; i < strs.size(); i++) {
            if(smallestWord == 0) {
                smallestWord = strs[i].length();
            }
            else {
                if(smallestWord > strs[i].length()) {
                    smallestWord = strs[i].length();
                }
            }
        }

        for(int i = 0; i < smallestWord; i++) {
            aStrs = {};
            for(int k = 0; k < strs.size(); k++) {
                for(int j = i; j < smallestWord; j++) {
                    aStrs.push_back(strs[k][j]);
                    break;
                }
            }
            bStrs.push_back(aStrs);
        }

        
        for(int i = 0; i < bStrs.size(); i++) {
            int count = bStrs[i].size();
            char holdPrefix = '.';
            for(int j = 0; j < bStrs[i].size(); j++) {
                if(holdPrefix == '.') {
                    holdPrefix = bStrs[i][j];
                    count--;
                }
                else {
                    if(holdPrefix == bStrs[i][j]) {
                        count--;
                    } 
                    else {
                        break;
                    }
                }                
            }
            if(count == 0) {
                longestCommonPrefix += holdPrefix;
            }
            else {
                break;
            }
        }
        
        return longestCommonPrefix;
    }
};

int main() {
    Solution solution;
    
    vector<string> test = {"flower","flow","flight"};

    cout << solution.longestCommonPrefix(test);

    return 0;
}