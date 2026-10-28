class Solution {
public:
    int subtractProductAndSum(int n) {
        int pd = 1;
        int sum = 0;
        while(n>0){
            int dig = n%10;
            pd *= dig;
            sum += dig;
            n /= 10;
        }
    return pd - sum;
    }
};