class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
         sort(arr.begin(), arr.end());

         int cnt = 0;
         int left = 0;
         int right = arr.size() - 1;

         while(left < right) {
             int sum = arr[left] + arr[right];

             if(sum < target) {
                 left++;
             }
             else if(sum > target) {
                 right--;
             }
             else {
                 if(arr[left] == arr[right]) {
                     int n = right - left + 1;
                     cnt += n * (n - 1) / 2;
                     break;
                 }

                 int leftCount = 1;
                 int rightCount = 1;

                 while(left + 1 < right && arr[left] == arr[left + 1]) {
                     leftCount++;
                     left++;
                 }

                 while(right - 1 > left && arr[right] == arr[right - 1]) {
                     rightCount++;
                     right--;
                 }

                 cnt += leftCount * rightCount;

                 left++;
                 right--;
             }
         }

         return cnt;
     }
};