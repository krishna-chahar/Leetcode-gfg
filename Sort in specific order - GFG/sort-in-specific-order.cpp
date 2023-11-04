//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        vector<long long> odd;
        vector<long long> even;
        for(long long i=0;i<n;i++)
        {
            if(arr[i]%2==0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        int temp=odd.size();
        for(long long i=0;i<temp;i++)
        {
            arr[i]=odd[i];
        }
        for(long long i=0;i<even.size();i++)
        {
            arr[i+temp]=even[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends