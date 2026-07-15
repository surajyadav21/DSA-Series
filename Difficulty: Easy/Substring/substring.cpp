class Solution {
  public:
    string substring(string &s, int l, int r) {
        // code here
        int n=s.length();
        string ans;
        for(int i=0; i<n; i++){
            if(i>=l && i<=r){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};