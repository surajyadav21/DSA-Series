class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        int n = mices.size();
        
        sort(mices.begin(), mices.end());
        sort(holes.begin(), holes.end());
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            int dis = abs(mices[i]-holes[i]);
            ans = max(ans, dis);
        }
        return ans;
    }
};