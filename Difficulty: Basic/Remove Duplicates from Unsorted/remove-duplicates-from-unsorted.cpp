class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        set<int> st;
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++){
            if(st.find(arr[i]) == st.end()){
                st.insert(arr[i]);
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};