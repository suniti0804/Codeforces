#include<bits/stdc++.h>
using namespace std;
#define f(i, a, b) for(int i=a; i<b; i++)
#define ll long long 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string str;
    cin>>str;

    int curr=1;
    int i=0;

    while(i<n)
    {
        cout<<str[i];
        int temp=curr;
        while(temp--)
          i++;
        curr++;  
    }

    cout<<"\n";


    return 0;
}