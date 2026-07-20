class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a==b){
            return true;
        }
        return false;
    }
};