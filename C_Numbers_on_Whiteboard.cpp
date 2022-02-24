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
        cout<<2<<"\n";
        cout<<n<<" "<<n-1<<"\n";

        for(int i=n; i>2; i--)
          cout<<i<<" "<<i-2<<"\n";
    }
    return 0;
}