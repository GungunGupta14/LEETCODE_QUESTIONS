//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        if(str=="Character"||str=="character")
        return 1;
        else if(str=="Integer"||str=="integer")
        return 4;
        else if(str=="Long"||str=="long")
        return 8;
        else if(str=="Float"||str=="float")
        return 4;
        else if(str=="Double"||str=="double")
        return 8;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends