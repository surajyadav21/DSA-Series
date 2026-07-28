class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i=0; i<n; i++){
            int temp = arr[i];
            int val = 0;
            
            while(temp > 0){
                int dig = temp%10;
                val = val*10+dig;
                temp /= 10;
            }
            
            if(val != arr[i]){
                return false;
            }
            
        }
        return true;
    }
};