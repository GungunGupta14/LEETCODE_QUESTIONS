class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.size()/2;i++)
        {
                sum = nums[i]+nums[nums.size()-i-1];
                ans =max(ans,sum);
        }
        return ans;
}
};