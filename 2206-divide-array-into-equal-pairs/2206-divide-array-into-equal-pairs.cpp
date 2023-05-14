class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> mp;
        for(auto n: nums){
            mp[n]++;
        }
        for(auto m: mp){
            if(m.second%2==1)
                return false;
        }
        return true;
    }

};