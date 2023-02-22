//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
 long long fact(long long n){
        if(n==0 || n==1)
            return 1;
        return n*fact(n-1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long>v;
        long long a=1;
        long long i=2;
        while(a<=N){
            v.push_back(a);
            a=fact(i);
            i++;
        }      
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends