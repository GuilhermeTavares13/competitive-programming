#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int firstOcurrence = -1;
        string splitStr = "";

        if (haystack.length() < needle.length()) {
            return -1;
        }

        for(int i = 0; i < haystack.length(); i++) {
            for(int j = 0; j < needle.length(); j++) {
                if(haystack[i] == needle[0]) {
                    splitStr = "";
                    for(int k = 0; k < needle.length(); k++) {
                        if(j+k > needle.length()) {
                            continue;
                        }
                        if(haystack[i+k] == needle[j+k]) {
                            splitStr += needle[j+k];
                        }
                    }
                    if (splitStr == needle) {
                        return i;
                    }
                }   
            }

            if (haystack.substr(i,haystack.length()).length() < needle.length()) {
                return -1;
            }
        }        
        return firstOcurrence;    
    }
};

int main() {
    Solution solution;

    cout << solution.strStr("ababcaababcaabc","ababcaabc");
    return 0;
}