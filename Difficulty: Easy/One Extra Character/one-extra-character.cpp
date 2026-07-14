class Solution {
  public:
    char extraChar(string &s1, string &s2) {
        // code here
        char ans = 0;

    for (char ch : s1)
        ans ^= ch;

    for (char ch : s2)
        ans ^= ch;

    return ans;
    }
};