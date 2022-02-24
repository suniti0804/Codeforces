#include<bits/stdc++.h>
using namespace std;
#define f(i, a, b) for(int i=a; i<b; i++)
#define ll long long 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n*=2;
        int arr[n];

        for(int i=0; i<n; i++)
          cin>>arr[i];
 
        sort(arr, arr+n);
        cout<<arr[n/2]-arr[(n/2)-1]<<"\n";

    }
    return 0;
}