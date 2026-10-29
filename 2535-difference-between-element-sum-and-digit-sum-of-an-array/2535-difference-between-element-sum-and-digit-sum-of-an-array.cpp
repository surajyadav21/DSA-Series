class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0; i<nums.size(); i++){
            sum1 += nums[i];
            int cur = nums[i];
            while(cur>0){
                sum2 += cur % 10;
                cur /= 10;
            }
        }
        return sum1 - sum2;
    }
};