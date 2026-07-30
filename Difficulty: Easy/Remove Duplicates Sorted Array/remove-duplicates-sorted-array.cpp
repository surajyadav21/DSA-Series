class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> ans;
        sort(arr.begin(), arr.end());
        int i=0;
        while(i<arr.size()){
            if(arr[i]!=arr[i+1]){
                ans.push_back(arr[i]);
            }
            i++;
        }
        return ans;
    }
};