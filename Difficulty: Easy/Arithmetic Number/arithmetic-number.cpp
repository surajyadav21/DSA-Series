class Solution {
  public:
    int inSequence(int a, int b, int c) {
        // code here
        int sum = a;
        for(int i=1; i<=b; i++){
            sum += c;
            if(sum == b){
                return 1;
            }
        }
        return 0;
    }
};