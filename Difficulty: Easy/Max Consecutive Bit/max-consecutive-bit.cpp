class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int count=0;
        int maxcount=0;
        for(int i=0;i<arr.size()-1;i++){
            int curr=arr[i];
        if(arr[i+1]==curr){
            count++;
            maxcount=max(maxcount,count);
            continue;
        }
        count=0;
        
        }
        return maxcount+1;
    }
};