#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// We compare every character from the end to begining taking all respect for edge cases 
class find_suffix {
public:
    string longestCommonSuffix(vector<string>& strs) {
        if (strs.empty()) return "";

        string suffix = "";

        int i = 0;

        while (true) {
            if (strs[0].size() <= i) break;

            char c = strs[0][strs[0].size() - 1 - i];

            for (int j = 1; j < strs.size(); j++) {
                if (strs[j].size() <= i ||
                    strs[j][strs[j].size() - 1 - i] != c) {
                    reverse(suffix.begin(), suffix.end());
                    return suffix;
                }
            }

            suffix.push_back(c);
            i++;
        }
// To reverse the suffix for example if the longest common suffix is {ing} without the reverse algorithm it will return {gni} 
        reverse(suffix.begin(), suffix.end());
        return suffix;
    }
};












































    

