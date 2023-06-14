class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<char,int> m;  
        for(auto x:nums){ 
            m[x]++; 
            if(m[x]==2)
            return x;
        }
        return -1;
    }
};