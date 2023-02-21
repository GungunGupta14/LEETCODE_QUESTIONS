//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    int k=1;
	    for(int i=n-1;i>=0;i--){
	        for(int j=i;j>=0;j--){
	            cout<<k<<" ";
	            k++;
	        }
	        k=1;
	        cout<<endl;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends