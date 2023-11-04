//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++

void countSort(int arr[],int pos,int n)
{
    vector<int> freq(10,0);
    for(int i=0;i<n;i++)
    {
        freq[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++)
    {
        freq[i]+=freq[i-1];
    }
    vector<int> ans(n);
    for(int j=n-1;j>=0;j--)
    {
        ans[--freq[(arr[j]/pos)%10]]=arr[j];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=ans[i];
    }
    return ;
}


void radixSort(int arr[], int n) 
{ 
   // code here
   int max_ele=INT_MIN;
   for(int i=0;i<n;i++)
   {
       max_ele=max(max_ele,arr[i]);
   }
   for(int pos=1;0<max_ele/pos;pos*=10)
   {
       countSort(arr,pos,n);
   }
} 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends