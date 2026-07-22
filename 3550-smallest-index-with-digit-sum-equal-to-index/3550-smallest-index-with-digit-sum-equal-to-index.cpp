class Solution {
public:
    int func(int a){
        int sum =0;
        while(a>0){ 
        int dig = a%10;
            sum +=dig;
            a /= 10;
        }
        return sum;  
    }
    int smallestIndex(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            int ans = func(nums[i]);
            if(ans == i) return i;
        }
        return -1;
    }
};