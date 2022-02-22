#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mn=0, mx=0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>arr[mx])
          mx=i;
        if(arr[i]<=arr[mn])
          mn=i;  
    }

    if(mx<mn)
      cout<<mx+n-1-mn;
    else if(mx>mn)
      cout<<mx+n-2-mn;
    else 
      cout<<0;
    cout<<"\n";     
    
    return 0;        
}