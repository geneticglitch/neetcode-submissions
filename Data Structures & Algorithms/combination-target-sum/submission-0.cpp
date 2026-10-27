class Solution {
public:
    void backtrack(vector<int>& nums, int target, int start_idx, vector<int>& path, vector<vector<int>>& result){
        if (target == 0){
            result.push_back(path);
            return;
        }
        if (target < 0){
            return;
        }

        for(int i = start_idx; i < nums.size(); i ++){
            path.push_back(nums[i]);
            backtrack(nums, target - nums[i], i, path, result);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(nums, target, 0, path , result);
        return result;
    }
};
