class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>umap;
        vector<int>v;
        for (int i=0;i<nums.size();i++)
        {
            umap.insert({nums[i],i});
        }
        for (int i=0;i<nums.size();i++)
        {
            int c=target-nums[i];
            if (umap.find(c)!=umap.end())
            {
                if (umap[c]!=i)
                {
                cout<<umap[c];
                v.push_back(i);
                v.push_back(umap[c]);
                return v;
                }
                
            }
        }
        return v;


    }
};