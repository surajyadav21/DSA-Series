class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int idx = 0;
        int temp[n+m];
        int left = 0, right = 0;
        while(left<n && right<m){
            if(a[left] <= b[right]){
                temp[idx] = a[left];
                idx++; left++;
            }
            else{
                temp[idx] = b[right];
                idx++; right++;
            }
        }
        while(left < n){
            temp[idx++] = a[left++];
        }
        while(right < m){
            temp[idx++] = b[right++];
        }
        for(int i=0; i<n; i++){
            a[i] = temp[i];
        }
        for(int i=0; i<m; i++){
            b[i] = temp[n+i];
        }
    }
};