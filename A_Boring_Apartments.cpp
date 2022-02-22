#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int ctr=1;

        while(n>=10)
        {
            ctr++;
            n/=10;
        }
        n--;

        cout<<(ctr*(ctr+1)/2)+(n*10)<<"\n";
    }
    return 0;
}