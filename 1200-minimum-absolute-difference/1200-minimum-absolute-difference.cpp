class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        vector<vector<int>>pair;
        int n=arr.size();
        for (int i=1;i<n;i++)
        {
            int diff = abs(arr[i] - arr[i - 1]);
            mini = min(mini, diff);
        }
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])==mini){
                pair.push_back({arr[i-1],arr[i]});
            }
        }
        return pair;
    }
};