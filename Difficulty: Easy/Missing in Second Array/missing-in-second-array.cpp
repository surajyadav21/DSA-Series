class Solution {
  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        unordered_set<int> st;
        for(int i=0; i<b.size(); i++){
            st.insert(b[i]);
        }
        vector<int> res;
        for(int i=0; i<a.size(); i++){
            if(st.find(a[i]) == st.end()){
                res.push_back(a[i]);
            }
        }
        return res;
    }
};
