class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(2*n,0);
        int i=0, j=n, k=0;
        while(i<n){
            res[k] = nums[i];
            res[k+1] = nums[j];
            i++; j++; k+=2;
        }
        return res;
    }
};