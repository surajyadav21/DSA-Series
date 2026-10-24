class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int ans = INT_MAX;
        int n = arr.size();
        for(int i=0; i<n; i++){
            int sum = 0;
            int cnt=0;
            for(int j=i; j<n; j++){
                sum += arr[j];
                cnt++;
                if(sum > x){
                    ans = min(ans, cnt);
                    break;
                }
                
            }
        }
        if(ans == INT_MAX){
            return 0;
        }
        return ans;
    }
};