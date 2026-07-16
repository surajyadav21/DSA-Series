string sliceString(string &s) {
    // code here
    string str;
    for(int i=0; i<s.size(); i++){
        if(i>0 && i<s.size()-1){
            str.push_back(s[i]);
            
        }
    }
    return str;
}