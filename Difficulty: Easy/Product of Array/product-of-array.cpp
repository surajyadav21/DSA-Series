class Solution {
  public:
    long long int product(vector<int> &arr) {
        long long pd = 1;
         const long long MOD = 1000000007;
         for(int i = 0; i < arr.size(); i++){
            pd = (pd * arr[i]) % MOD;
        }
        return pd;
    }
};