class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup = -1;
        int miss = -1;
        for(int i=1; i<=n; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(nums[j]==i){
                    cnt++;
                }
            }
            if(cnt == 0){
                miss = i;
            }
            if(cnt == 2){
                dup = i;
            }
        }
        return {dup, miss};
    }
};