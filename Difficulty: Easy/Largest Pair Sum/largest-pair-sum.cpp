class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int sum = 0;
        int n = arr.size();
        int largest=0, secLargest = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > largest){
                secLargest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i] > secLargest){
                secLargest = arr[i];
            }
            
        }
        sum = largest + secLargest;
        return sum;
    }
};
