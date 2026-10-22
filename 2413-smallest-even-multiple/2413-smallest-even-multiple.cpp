class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = n * (n % 2 + 1);
        return ans;
    }
};