class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> st;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            if(sum == 0){
                return true;
            }
            
            if(st.find(sum) != st.end()){
                return true;
            }
            
            st.insert(sum);
        }
        return false;
    }
};