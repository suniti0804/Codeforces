#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string num;
        cin>>num;

        int p=0;
        int ctr=0;

        for(int i=0; i<num.size(); i++)
          if(num[i]!='0')
            ctr++;
        cout<<ctr<<"\n";    

        for(int i=num.size()-1; i>=0; i--)
        {
            if(num[i]!='0')
            cout<<(num[i]-'0')*pow(10,p)<<" ";
            p++;
        }

        cout<<"\n";
    }
}