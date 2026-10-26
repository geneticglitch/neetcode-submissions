class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        
        int lp = 1;
        for(int i =0; i < nums.size(); i ++){
            result[i] = lp;
            lp*=nums[i];
        }

        int rp = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] *= rp;
            rp *= nums[i];
        }

        return result;
    }
};
