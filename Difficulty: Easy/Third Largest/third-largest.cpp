class Solution {
  public:
    int thirdLargest(vector<int> &nums) {
        // code here
        if(nums.size() < 3) return -1;
    int lrg = INT_MIN;
    int slrg = INT_MIN;
    int tlrg = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>=lrg){
            tlrg = slrg;
            slrg = lrg;
            lrg = nums[i];
        }
        else if(nums[i]>=slrg){
            tlrg = slrg;
            slrg = nums[i];
        }
        else if(nums[i]>=tlrg){
            tlrg = nums[i];
        }
    }
    

    return tlrg;
    }
};