#include<bits/stdc++.h>
using namespace std;
#define f(i, a, b) for(int i=a; i<b; i++)
#define ll long long 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    cin>>k;
    string str;
    cin>>str;

    unordered_map<char, int> mp;
    for(auto ch:str)
      mp[ch]++;    

    for(auto it:mp)
      if(it.second%k!=0)
      {
          cout<<"-1";
          return 0;
      }
    
    string res="";
    for(auto it:mp)
    {
        int t=it.second/k;
        while(t--)
          res+=it.first;
    }

    while(k--)
      cout<<res;

    return 0;
}