class Solution {
public:
    int minimumSum(int num) {
        int digit;
        int t=num;
        vector <int> arr;
        while(t!=0){
            digit=t%10;
            t/= 10;
            arr.push_back(digit);
        }
        sort(arr.begin(),arr.end());
        int new1= arr[0]*10+arr[3];
        int new2= arr[1]*10+arr[2];
        return new1+new2;
    }
};