class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int candidate = arr[n / 2];

        int count = 0;
        for (int x : arr) {
            if (x == candidate)
                count++;
            }

            if (count > n / 2)
                return candidate;
        return -1;
    }
};