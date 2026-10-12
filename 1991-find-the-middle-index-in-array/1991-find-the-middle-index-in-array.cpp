class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int i=0; i<n; i++){
            total += nums[i];
        }
        int lSum = 0;
        for(int i=0; i<n; i++){
            int rSum = total - lSum - nums[i];
            if(lSum == rSum){
                return i;
            }
            lSum += nums[i];
        }
        return -1;
    }
};