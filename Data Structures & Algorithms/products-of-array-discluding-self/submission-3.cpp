class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 1;
        bool zero = false;
        int zcount = 0;
        for(int i : nums){
            if(i == 0){
                zero = true;
                zcount++;
            } else {
                sum *= i;
            }
        }

        vector<int> output;
        for(int j : nums){
            if(j != 0 && !zero){
                output.push_back(sum/j);
            } else if (j != 0 && zero){
                output.push_back(0);
            } else if (j == 0 && zcount>1) {
                output.push_back(0);
            } else {
                output.push_back(sum);
            }
        }

        return output;

    }
};
