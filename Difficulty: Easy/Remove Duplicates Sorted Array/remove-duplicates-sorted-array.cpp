class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> ans;
        
        int i=1;
        while(i<=arr.size()){
            if(arr[i-1]!=arr[i]){
                ans.push_back(arr[i-1]);
            }
            i++;
        }
        return ans;
    }
};