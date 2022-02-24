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
        int n, m;
        cin>>n>>m;
        char x;
        int ctr=0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>x;
                if(j==m-1&&x=='R')
                  ctr++;
                if(i==n-1&&x=='D')
                  ctr++;  
            }
        }

        cout<<ctr<<"\n";

    }
    return 0;
}