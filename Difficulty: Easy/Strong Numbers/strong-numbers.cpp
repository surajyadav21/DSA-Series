class Solution {
  public:
  public:
    int factorial(int a){
        int f=1;
        for(int i=1; i<=a; i++){
            f *= i;
        }
        return f;
    }
    bool isStrong(int n) {
        int x = n;
        int sum=0;
        while(n > 0){
            int dig = n%10;
            int temp = factorial(dig);
            sum += temp;
            n /= 10;
        }
        
        if(sum == x){
            return true;
        }
        return false;
    }
};
