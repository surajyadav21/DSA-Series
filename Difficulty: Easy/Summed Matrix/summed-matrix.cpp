
class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        long long left = max(1LL, q - n);
        long long right = min(n, q - 1);

        if (left > right){
            return 0;
        }
        return right - left + 1;
    }
};