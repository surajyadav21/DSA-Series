class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans;
        int left = 0;
        int right = arr.size()-1;
        
        while(left < right){
            int sum = arr[left] + arr[right];
            if(sum == target){
                ans.push_back(left + 1);
                ans.push_back(right + 1);
                return ans;
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
        return{-1,-1};
    }
};