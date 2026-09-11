class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size() == 0) return 0;
        sort(arr.begin(), arr.end());
        int lastSmaller = INT_MIN;
        int cnt = 0;
        int longest = 1;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]-1 == lastSmaller){
                cnt++;
                lastSmaller = arr[i];
            }
            else if(lastSmaller != arr[i]){
                cnt = 1;
                lastSmaller = arr[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};