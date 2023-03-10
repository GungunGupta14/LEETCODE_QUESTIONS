class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans; 
        int s =0;
        int e =nums.size()-1; 
        while(s<e){
            if(nums[s]+nums[e]<target){
                ++s;
            }
            else if(nums[s]+nums[e]>target){
                --e;
            }
            else{
                ans.push_back(s+1);
                ans.push_back(e+1);
                break;
                ++s;
            }
        }
        return ans;
    }
};