class Solution {
  public:
    string modify(string& s) {
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            while(left < right && 
            s[left]!='a'&&s[left]!='e'&&s[left]!='i'&&
            s[left]!='o'&&s[left]!='u'){
                left++;
            }
            while(left < right && 
            s[right]!='a'&&s[right]!='e'&&s[right]!='i'&&
            s[right]!='o'&&s[right]!='u'){
                right--;
            }
            if(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
