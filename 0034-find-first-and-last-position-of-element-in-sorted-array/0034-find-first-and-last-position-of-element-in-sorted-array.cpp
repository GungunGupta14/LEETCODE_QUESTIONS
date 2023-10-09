class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int fpos=-1;
        int lpos=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                fpos=mid;
                e=mid-1;   
            }
            else if(nums[mid]<target)
            {
                s =mid+1;   
            }
            else
            {
                e=mid-1;
            }   
        }
       s=0;
        e=nums.size()-1;
        
         while(s<=e)
        {
            int mid=s+(e-s)/2;
            
            if(nums[mid]<=target)
            {
                if(nums[mid]==target)
                    lpos=mid;
                s=mid+1;   
            }
            else
            {
                e=mid-1;
            }   
        }
        return {fpos,lpos};
    }
};