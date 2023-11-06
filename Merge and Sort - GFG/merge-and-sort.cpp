//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
    // Write your code here

class Solution{
    public:
    int mergeNsort(int a[], int b[], int n, int m, int answer[])
    {
        // Write your code here
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0,k=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                answer[k++]=a[i++];
                while(a[i]==a[i-1]) i++;
            }
            else
            {
                if(a[i]==b[j]) i++;
                answer[k++]=b[j++];
                while(b[j]==b[j-1]) j++;
                while(a[i]==a[i-1]) i++;
              
            }
        }
        while(i<n)
        {
            answer[k++]=a[i++];
            while(a[i]==a[i-1]) i++;
        }
        while(j<m)
        {
            answer[k++]=b[j++];
            while(b[j]==b[j-1]) j++;
        }
        return k;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m+5];
        for(int j=0;j<m;j++)
            cin>>b[j];
        Solution ob;
        int answer[n+m+5];
        int x=ob.mergeNsort(a, b, n, m, answer);
        
        for(int i=0;i<x;i++)
        cout<<answer[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}
// } Driver Code Ends