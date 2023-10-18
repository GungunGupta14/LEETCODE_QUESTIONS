class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
       int d=digits.size();
        sort(digits.begin(),digits.end());
        rotate(digits.begin(),digits.begin()+d-1,digits.end());
        
        auto check=[&](int mid)
        {
            string ans="";
            while(mid>0)
            {
                ans+=(digits[mid%d]);
                 if(ans.size()>9)
            return false;
                if(mid%d==0)
                {
                    mid/=d;
                    mid--;
                }
                else 
                mid/=d;
            }
            reverse(ans.begin(),ans.end());
           

            return stoi(ans)<=n;

        };
         int low=1,high=1e9,ans=1;;
         while(low<=high)
         {
             int mid=low+(high-low)/2;
             if(check(mid))
             {
                 ans=mid;
                 low=mid+1;
             }
             else 
             high=mid-1;
         }
         return ans;
        
    }
};