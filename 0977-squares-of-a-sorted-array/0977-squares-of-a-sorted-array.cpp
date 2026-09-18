class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int k = n-1;
        int lsq=0, rsq=0;
        vector<int> res(n);
        while(left <= right){
            lsq = nums[left] * nums[left];
            rsq = nums[right] * nums[right];
            if(lsq > rsq){
                res[k] = lsq;
                left++; k--;
            }
            else{
                res[k] = rsq;
                right--; k--;
            }
        }
        return res;
    }
};