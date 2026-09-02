
class Solution {
  public:
    string reverse(string str) {
        int left = 0;
        int right = str.size()-1;
        
        while(left < right){
            if(!isalnum(str[left])){
                left++;
                continue;
                
            }
            if(!isalnum(str[right])){
                right--;
                continue;
            }
            swap(str[left],str[right]);
            
            left++; right--;
        }
        return str;
    }
};