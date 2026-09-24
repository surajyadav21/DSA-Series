class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int cur = nums[i];
            int sum = 0;
            while(cur > 0){
                int dig = cur % 10;
                cur /= 10;
                sum += dig;
            }
            if(sum == i){
                return i;
            }
        }
        return -1;
    }
};