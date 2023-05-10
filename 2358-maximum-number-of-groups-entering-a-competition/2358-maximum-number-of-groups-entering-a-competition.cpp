class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int count=0, j=1;
        for(int i=0;i<grades.size();i=i+j){
            j++;
            count++;
        }
        return count;
    }
};