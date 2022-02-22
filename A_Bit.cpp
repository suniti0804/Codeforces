#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    while(n--)
    {
        string x;
        cin>>x;

        if(x[0]=='+'||x[2]=='+')
          res++;
        else
          res--;  
    }

    cout<<res<<"\n";
    return 0;
}