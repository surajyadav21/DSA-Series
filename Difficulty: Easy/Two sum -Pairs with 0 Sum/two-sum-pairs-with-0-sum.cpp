class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        
        int left = 0;
        int right = arr.size()-1;
        
        vector<vector<int>> mat;
        
        while(left < right){
            int sum = arr[left]+arr[right];
            
            if(sum==0){
                mat.push_back({arr[left],arr[right]});
                int leftValue = arr[left];
                int rightValue = arr[right];
                
                while(left < right && arr[left] == leftValue) {
                    left++;
                }
                
                while(left < right && arr[right] == rightValue) {
                    right--;
                }
            }
            else if(sum < 0){
                left++;
            }
            else{
                right--;
            }
        }
        
        return mat;
    }
};