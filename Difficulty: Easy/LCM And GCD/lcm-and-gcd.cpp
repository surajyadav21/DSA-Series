class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int ans = __gcd(a,b);
        int res = lcm(a,b);
        return {res,ans};
    }
};