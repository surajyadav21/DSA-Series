class Solution {
  public:
    int floorSqrt(int n) {
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(i*i==n){
                ans = i;
                break;
            }
            else if(i*i>n){
                ans = i-1;
                break;
            }
        }
        return ans;
    }
};