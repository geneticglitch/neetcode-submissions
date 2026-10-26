#include <map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lol;

        for(int i = 0; i < nums.size(); i ++){
            if (lol.find(target - nums[i]) != lol.end()){
                return {lol[target-nums[i]], i};
            }

            lol[nums[i]] = i;
        }


        return {};
    }
};
