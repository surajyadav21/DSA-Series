class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int dmin = n;
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                dmin = min(dmin, abs(i - start));
            }
        }
        return dmin;
    }
};