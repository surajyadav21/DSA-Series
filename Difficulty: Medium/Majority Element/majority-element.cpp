class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int element = arr[n / 2];
        int count = 0;
        for (int x : arr) {
            if (x == element)
                count++;
            }
            if (count > n / 2)
                return element;
        return -1;
    }
};