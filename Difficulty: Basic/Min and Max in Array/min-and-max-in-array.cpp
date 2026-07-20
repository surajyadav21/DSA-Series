class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> ans;
        int max = arr[0];
        int min = arr[0];
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] < min){
                min = arr[i];
            }
            
            if(arr[i] > max){
                max = arr[i];
                
            }
        }
        ans.push_back(min);
        ans.push_back(max);
        return ans;
    }
};