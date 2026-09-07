class Solution {
  public:
    int productOfPairs(vector<int>& arr) {
        const long long MOD = 1000000007;
            long long ans = 0;
            long long sum = 0;
            for (int x : arr) {
                ans = (ans + (x * sum) % MOD) % MOD;
                sum = (sum + x) % MOD;
            }
            return ans;
    }
};