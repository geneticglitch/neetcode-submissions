#include <map>
#include <algorithm>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> lol;
        vector<pair<int, int>> lol2;

        for (int i = 0; i < nums.size(); i ++){
            lol[nums.at(i)]++;
        }

        for(auto& [key, value]: lol){
            lol2.push_back({key, value});
        }

        sort(lol2.begin(), lol2. end(), [](auto& a, auto& b) {return a.second > b.second;});

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(lol2.at(i).first);
        }
        return result;
    }
};
