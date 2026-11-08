class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            int a = 0, c = i;
            while(c){
                a += c & 1;
                c >>= 1;
            }    
            if(a == k){
                ans += nums[i];
            }
        }
        return ans;
    }
};