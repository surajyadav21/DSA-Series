class Solution {
  public:
    void arrange(vector<int>& arr) {
        int n=arr.size();
        vector<int> v;
        for(int i=0; i<n; i++){
            v.push_back(arr[arr[i]]);
        }
        for(int i=0; i<v.size(); i++){
            arr[i] = v[i];
        }
        
    }
};