class Solution {
  public:
    int digitsInFactorial(int n) {
        // code here
        if(n==0 || n==1) return n;
        double dig = 0;
        for(int i=1; i<=n; i++){
            dig += log10(i);
        }
        
        return floor(dig) + 1;
    }
};