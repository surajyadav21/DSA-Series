class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = 0;
        for(int i=0; i<nums.size(); i++){
            totalSum += nums[i];
        }
        int cnt = 0;
        int lSum = 0;
        for(int i=0; i<nums.size()-1; i++){
            lSum += nums[i];
            int rSum = totalSum - lSum;
            if((lSum - rSum)%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};