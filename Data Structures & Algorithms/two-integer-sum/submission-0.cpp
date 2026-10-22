class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            temp = target - nums[i];
            auto it = find(nums.begin() + i + 1, nums.end(), temp);
            if(it != nums.end()){
                return {i,static_cast<int>(distance(nums.begin(), it))};
            }
        }
    }
};
