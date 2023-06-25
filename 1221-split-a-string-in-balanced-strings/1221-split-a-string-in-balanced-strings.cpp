class Solution {
public:
    int balancedStringSplit(string s) {
        int lcount = 0, rcount = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++) {
            if(s[i]== 'R') {
                rcount++;
            } else {
                lcount++;
            }
            if(lcount == rcount) {
                ans++;
                lcount = rcount = 0;
            }
        }
        return ans;
    }
};