class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int lSum = 0, rSum = 0;
            for(int j=0; j<i; j++){
                lSum += nums[j];
            }
            for(int j=i+1; j<n; j++){
                rSum += nums[j];
            }
            if(lSum == rSum){
                return i;
            }
        }
        return -1;
    }
};