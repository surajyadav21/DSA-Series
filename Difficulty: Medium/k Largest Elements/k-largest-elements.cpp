class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        
        vector<int> temp;
        for(int i=arr.size()-1; i>=n-k; i--){
            temp.push_back(arr[i]);
        }
        return temp;
    }
};