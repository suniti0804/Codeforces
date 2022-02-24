#include<bits/stdc++.h>
using namespace std;
#define f(i, a, b) for(int i=a; i<b; i++)
#define ll long long 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n;
    cin>>m>>n;

    if(m==n)
    {
        cout<<0;
        return 0;
    }
    if(m>n)
    {
        cout<<-1;
        return 0;
    }

    int ctr=0;
    while(m<n)
    {
        if(n%(m*2)==0)
          m*=2;
        else
          m*=3;
        ctr++;    
    }

    m==n?cout<<ctr:cout<<"-1";

    return 0;
}