class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; 
        int right = numbers.size() - 1;

        while(left < right){
            if(target == (numbers[left] + numbers[right])){
                return {left + 1, right + 1};
            }

            int comp = target - (numbers[left] + numbers[right]);

            if(comp < 0){
                right--;
            }
            else{
                left++;
            }
        }

        return {};
    }
};
