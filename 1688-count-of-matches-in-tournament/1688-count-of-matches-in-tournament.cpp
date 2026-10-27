class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;
        int t=n;
        while(t>1){
            if(t%2==0){
                t /= 2;
                ans += t;
            }
            else{
                t = (t-1)/2;
                ans += t;
                t += 1;
            }
        }
        return ans;
    }
};