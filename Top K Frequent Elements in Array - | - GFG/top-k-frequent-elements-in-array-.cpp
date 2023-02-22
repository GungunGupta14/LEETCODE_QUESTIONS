//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int,int> m;

         for(int i = 0 ;i<nums.size();i++){

             m[nums[i]]++;

         }

         vector< pair <int,int> > vect;

         for(auto i : m){

             vect.push_back(make_pair(i.second,i.first));

         }

         sort(vect.begin(),vect.end());

         reverse(vect.begin(),vect.end());

         vector<int> v;

         int i = 0;

         while(i<k){

             v.push_back(vect[i].second);

             i++;

         }

         return v;

        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends