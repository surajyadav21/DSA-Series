class Solution {
public:
    int maxArea(vector<int>& height) {
        int ht=0, maxArea=0;
        int left=0, right = height.size()-1;
        while(left < right){
            ht = min(height[left], height[right]);
            int width = right - left;
            int area = ht * width;
            maxArea = max(maxArea, area);

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};