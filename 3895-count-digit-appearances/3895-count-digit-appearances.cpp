class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            int cur = nums[i];
            while(cur > 0){
                int dig = cur % 10;
                if(dig == digit){
                    cnt++;
                }
                cur /= 10;
            }
        }
        return cnt;
    }
};