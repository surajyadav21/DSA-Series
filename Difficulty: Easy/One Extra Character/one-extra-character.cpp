class Solution {
  public:
    char extraChar(string &s1, string &s2) {
        // code here
        char ans = 0;
        for(char i : s1){
            ans ^= i;
        }
        for(char i : s2){
            ans ^= i;
        }
        return ans;
    }
};