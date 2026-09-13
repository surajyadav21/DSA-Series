class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        for(int i=0; i<n; i++){
            nums[i] = start + 2 * i;
            
        }
        int xr = 0;
        for(int i=0; i<n; i++){
            xr = xr ^ nums[i];
        }
        return xr;
    }
};