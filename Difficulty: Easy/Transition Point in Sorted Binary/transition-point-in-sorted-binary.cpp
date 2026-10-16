class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i=1; i<n; i++){
            if(arr[i-1] < arr[i]){
                return i;
            }
        }
        int cnt1=0, cnt2=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                cnt1++;
            }
        }
        if(cnt1 == n) return -1;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                cnt2++;
            }
        }
        if(cnt2 == n) return 0;
    }
};