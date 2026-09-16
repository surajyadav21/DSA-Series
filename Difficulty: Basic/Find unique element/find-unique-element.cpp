class Solution {
  public:
    int uniqueElement(vector<int>& arr, int k) {
        map<int, int> freq;

        for(int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }
        for(auto x : freq)
        {
            if(x.second % k != 0)
            {
                return x.first;
            }
        }
        return -1;
    }
};