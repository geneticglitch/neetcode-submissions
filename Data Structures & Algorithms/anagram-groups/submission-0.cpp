#include <algorithm>
#include <unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> lol;
        vector<vector<string>> result;

        for(int i = 0; i < strs.size(); i ++){
            string sorted_val = strs.at(i);
            std::sort(sorted_val.begin(), sorted_val.end());
            lol[sorted_val].push_back(strs.at(i));
        }

        for(auto& [_, value] : lol){
            result.push_back(value);
        }

        return result;
    }
};
