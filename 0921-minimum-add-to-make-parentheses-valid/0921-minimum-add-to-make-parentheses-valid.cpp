class Solution {
public:
        int minAddToMakeValid(string S) {
        int c = 0, ans = 0;
        for (int i=0;i<S.size();i++) {
            if (S[i] == '(') 
            c++;      
            else if (c == 0) 
            ans++; 
            else 
            c--;               
        }
        return c + ans;             
    }
};