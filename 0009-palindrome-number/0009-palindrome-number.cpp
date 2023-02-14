class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else {
            long long tem = x, res = 0;
            while(tem != 0) {
                int z = tem%10;
                res = res * 10 + z;
                tem/=10;
            }
            return res == x;
        }
    }
};