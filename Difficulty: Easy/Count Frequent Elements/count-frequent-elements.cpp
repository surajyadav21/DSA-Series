class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        int n=arr.size();
        int cnt = 0;
        unordered_map<int,int> freq;
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        for(auto it: freq){
            if(it.second > n/k){
                cnt++;
            }
        }
        return cnt;
    }
};