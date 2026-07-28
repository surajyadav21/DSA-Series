class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
        bool isValidIndex = (index >= 0 && index <= arr.size());
        if (isValidIndex) {
            arr.resize(arr.size() + 1);

            for (int i = arr.size() - 1; i > index; i--) {
                arr[i] = arr[i - 1];
            }

            arr[index] = val;
        }
    }
};
