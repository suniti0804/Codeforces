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
        ll a, b, c;
        cin>>a>>b>>c;

        a<c?cout<<"1":cout<<"-1";
        cout<<" ";
        c<(a*b)?cout<<b:cout<<"-1";
        cout<<"\n";
    }
    return 0;
}