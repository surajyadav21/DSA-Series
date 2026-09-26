class Solution {
  public:
    int remainder(string &s) {
        int rem = 0;
        for(char ch: s){
            int dig = ch - '0';
            rem = (rem * 10 + dig)%11;
        }
        return rem;
    }
};