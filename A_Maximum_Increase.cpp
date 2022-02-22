#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ctr=1, res=1;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(i!=0)
        {
            if(arr[i]>arr[i-1])
              ctr++;
            else
              ctr=1;  
        }

        res=max(res, ctr);
    }
    cout<<res<<"\n";
    return 0;
}