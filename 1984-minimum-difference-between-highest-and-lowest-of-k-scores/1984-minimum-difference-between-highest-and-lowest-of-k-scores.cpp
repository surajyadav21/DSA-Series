class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0 || k==0 || k>n){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int mini = INT_MAX;
        for(int i=0; i<=n-k; i++){
            int d = nums[i+k-1]-nums[i];
            mini = min(mini, d);
        }
        
        return mini;
    }
};