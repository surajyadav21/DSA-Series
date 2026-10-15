class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        for(int i=1; i<nums.size(); i++){
            int cur = nums[i-1];
            int d = abs(nums[i-1]-nums[i]);
            if(d>1){
                while(d!=1){
                    res.push_back(cur+1);
                    cur++;
                    d--;
                }
            }else{
                continue;
            }
        }
        return res;
    }
};