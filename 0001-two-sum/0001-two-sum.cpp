class Solution{
public:
    vector<int> twoSum(vector<int>& arr, int tar){
        
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1;j<arr.size(); j++){
                if(arr[i]+arr[j] == tar){
                  return {i,j};
                  
                }
            }
        }
        return{};
    }
};