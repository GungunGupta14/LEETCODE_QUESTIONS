class Solution {
public:
    int sumBase(int n, int k) {
        int count=0;
        while(n){
            count=count+(n%k);
            n=n/k;
        }
        return count;
    }
};