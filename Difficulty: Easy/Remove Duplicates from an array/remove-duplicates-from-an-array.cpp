class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        set<int> st;
        for(int i=0; i<arr.size(); i++){
            st.insert(arr[i]);
        }
        vector<int> res;
        for(auto x : st){
            res.push_back(x);
        }
        return res;
    }
};