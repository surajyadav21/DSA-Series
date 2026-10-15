class Solution {
  public:
    int minProductSum(vector<int> &a, vector<int> &b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int sum = 0;
        int i=0, j=b.size()-1;
        while(i<a.size() && j>=0){
            sum += a[i] * b[j];
            i++;
            j--;
        }
        return sum;
    }
};