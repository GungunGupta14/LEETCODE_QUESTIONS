class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem;
        int sum=0;
        int pro=1;
        while(n!=0){
            rem=n%10;
            pro=pro*rem;
            sum=sum+rem;
            n=n/10;
        }
        int j=pro-sum;
        return j;
        }
};