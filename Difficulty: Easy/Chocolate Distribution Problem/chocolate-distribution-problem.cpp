class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();
        if(m==0 || n==0 || m>n){
            return 0;
        }
        sort(a.begin(), a.end());
        int mini = INT_MAX;
        for(int i=0; i<=n-m; i++){
            int d = a[i+m-1]-a[i];
            mini = min(mini, d);
        }
        
        return mini;
    }
};