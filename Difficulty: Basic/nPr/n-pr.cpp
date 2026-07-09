class Solution {
  public:
    long long fact(int a){
        if(a==0||a==1) return 1;
        long long f=1;
        for(long long i=1; i<=a; i++){
            f *= i;
        }
        return f;
    }
    long long nPr(int n, int r) {
        // code here
        
        return fact(n)/fact(n-r);
    }
};