class Solution {
  public:
    bool isPrime(int n){
        if(n<2){
            return false;
        }
        for(int i=2; i<=n/i; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int primeSum(int n) {
        int sum = 0;
        for(int i=2; i<=n; i++){
            if(isPrime(i)){
                sum += i;
            }
        }
        return sum;
    }
};