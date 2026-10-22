class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        for(int i=0; i<k; i++){
            int mini = nums[0];
            int idx = 0;
            for(int j=1; j<n; j++){
                if(nums[j] < mini){
                    mini = nums[j];
                    idx = j;
                }
            }
            nums[idx] = nums[idx] * multiplier;
        }
        return nums;
    }
};