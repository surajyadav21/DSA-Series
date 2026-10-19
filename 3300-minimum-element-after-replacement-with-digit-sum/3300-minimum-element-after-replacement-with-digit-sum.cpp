class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            int sum = 0;
            while(nums[i]>0){
                int dig = nums[i] % 10;
                sum += dig;
                nums[i] /= 10;
            }
            mini = min(mini, sum);
        }
        return mini;
    }
};