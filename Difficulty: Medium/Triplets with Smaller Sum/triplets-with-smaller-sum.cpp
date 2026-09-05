class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        int cnt = 0;
        
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<arr.size(); i++){
            int j=i+1, k = arr.size()-1;
            
            while(j<k){
                int summ = arr[i]+arr[j]+arr[k];
                if(summ < sum){
                    cnt += (k-j);
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return cnt;
    }
};