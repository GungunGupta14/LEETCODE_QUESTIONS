class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s=" ";
        for(auto c:words){
            s=c;
            reverse(c.begin(), c.end());
            if(c==s){
                return s;
            }
        }
        return "";
    }
};