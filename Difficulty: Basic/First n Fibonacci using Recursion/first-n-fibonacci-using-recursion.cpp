class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> ans;
        int a=0, b=1;
        for (int i = 0; i < n; i++) {
            ans.push_back(a);

            int next = a + b;
            a = b;
            b = next;
        }
        return ans;
        
    }
};