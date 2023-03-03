class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90) s[i]=s[i]+32;
        }
        // string b="";
        vector<char> b;
        // int k=0;
      for(int i=0;i<s.size();i++){
          if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57) ){
            //   b+=s[i];
            b.push_back(s[i]);
          }
      }
      int l=0;
      int r=b.size()-1;
      while(l<=r){
          if(b[l]!=b[r]){
              return false;
          }
          l++;
          r--;
      }
      return true;
    }
};