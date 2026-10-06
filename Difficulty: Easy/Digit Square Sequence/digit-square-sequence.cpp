class Solution {
  public:
    int getSum(int n){
        int sum = 0;
        while(n>0){
            int dig = n%10;
            sum += dig * dig;
            n /= 10;
        }
        return sum;
    }
    bool reachesOne(int n) {
        int slow = n;
        int fast = n;
        do{
            slow = getSum(slow);
            fast = getSum(getSum(fast));
        }while(slow != fast);
        
        return slow == 1;
    }
};