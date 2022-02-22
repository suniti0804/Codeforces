#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, n;
        cin>>a>>b>>n;
        int ctr=0;

        while(a<=n&&b<=n)
        {
            if(a<b)
              a+=b;
            else
              b+=a;
            ctr++;    
        }

        cout<<ctr<<"\n";
    }
}