#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        int n=str.size();
        int i=0;
        while(str[i]=='0'&&i<n)
           i++;
        int j=n-1;
        while(str[j]=='0'&&j>=0)
           j--;   

        int ctr=0; 
        while(i<j)
        {
            if(str[i]=='0')
              ctr++;  
            i++;
        }  

        cout<<ctr<<"\n";
    }
    return 0;
    
}