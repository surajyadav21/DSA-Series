class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int l = INT_MIN;
        int idx;
        for(int i=0; i<nums.size(); i++){
           if(nums[i] > l){
            l = nums[i];
            idx = i;
           }
        }
        for(int i=0; i<nums.size(); i++){
            int curr = nums[i];
            if(l < 2*curr && i!=idx){
                return -1;
            }
        }
        return idx;
    }
};