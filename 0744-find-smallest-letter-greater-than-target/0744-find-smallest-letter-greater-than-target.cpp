class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        char a=letters[0];
        int e=letters.size()-1;
        int m=s+(e-s)/2;
        while(s<=e){
            if(letters[m]>target){
                a=letters[m];
                e=m-1;
            }
            else {
                s=m+1;
            }
            m=s+(e-s)/2;
        }
        return a;
    }
};