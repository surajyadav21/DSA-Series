class Solution {
  public:
    bool isPrime(int n){
        if(n<2){
            return false;
        }
        for(int i=2; i<n; i++){
            if(n%2==0){
                return false;
            }
        }
        return true;
    }
    vector<int> primeFac(int n) {
        vector<int> unique;
        
        for(int i=2; i<=n; i++){
            if(n%i==0 && isPrime(i)){
                unique.push_back(i);
                while(n%i==0){
                    n /= i;
                }
            }
        }
        return unique;
    }
};