#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string res="";

        int ctr=0;
        unordered_map<int, int> mp;
        for(int i=0; i<s.size(); i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                res+=s[i];
                res+=s[i];
            }  
            mp[s[i]]++;  
        }

        if(ctr==1)
          cout<<s<<"\n";
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(mp[s[i]]==1)
                  res+=s[i];
            }
            cout<<res<<"\n";
        }  
    }

    return 0;
}