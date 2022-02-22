#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0, res=0;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        c-=a;
        c+=b;
        res=max(res, c);       
    }
    cout<<res<<"\n";

}