class Solution {
public:
    int mirrorDistance(int n) {
        int t = n;
        int m = 0;
        while(t>0){
           int dig = t % 10;
            m = m * 10 + dig;
            t /= 10;
        }
        return abs(n-m);
    }
};