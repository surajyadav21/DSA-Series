class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        int i=0;
        int j=0;
        vector<int> ans;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                i++; j++;
                while(i<arr1.size() && arr1[i]==arr1[i-1]){
                    i++;
                }
                while(arr2.size() && arr2[j]==arr2[j-1]){
                    j++;
                }
            }
            else if(arr1[i] < arr2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};