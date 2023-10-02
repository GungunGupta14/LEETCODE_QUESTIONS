class Solution {
public:
    string reverseOnlyLetters(string s) {
        int a=0,b=s.size()-1;
        while(a<=b){
            if(isalpha(s[a]) && !isalpha(s[b])){
                b--;
            }
            else if(!isalpha(s[a]) && isalpha(s[b])){
                a++;
            }
            else if(isalpha(s[a]) && isalpha(s[b])){
                swap(s[a],s[b]);
                a++,b--;
            }
            else{
                a++,b--;
            }
        }
        
        return s;
    }
    
};