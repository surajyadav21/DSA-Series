class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int maxArea = 0;
        int ht=0;
        int left = 0, right = arr.size()-1;
        while(left < right){
            ht = min(arr[left], arr[right]);
            int width = right - left;
            int area = ht * width;
            maxArea = max(maxArea, area);
            if(arr[left] < arr[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};