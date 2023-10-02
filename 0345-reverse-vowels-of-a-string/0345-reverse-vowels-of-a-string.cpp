class Solution {
public:
    bool isvowel(char s){

            if((s== 'a' || s== 'e' || s == 'i' || s == 'o' || s == 'u')){
                return true;
            }
            if((s == 'A' || s == 'E'|| s == 'I'|| s == 'O' || s == 'U')){
                return true;
            }
            

        return false;
    }
    string reverseVowels(string s) {
        int a=0,b=s.size()-1;
        while(a<b){
            if(isvowel(s[a])==0){
                a++;
            }
    
                else if(isvowel(s[a])&&isvowel(s[b])){
                    swap(s[a],s[b]);
                    a++,b--;
                }
                    else{
                        b--;
                    }
        }
                        return s;
    }
};