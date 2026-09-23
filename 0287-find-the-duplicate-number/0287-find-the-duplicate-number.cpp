class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1, 0);
        int maxi = 0;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i=1; i<=n; i++){
            if(freq[i]>=2){
                return i;
            }
        }
        return {};
    }
};