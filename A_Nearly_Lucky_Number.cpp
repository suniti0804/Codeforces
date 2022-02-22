#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string num;
    cin>>num;
 
    int ctr=0;
 
    for(int i=0; i<num.size(); i++)
      if(num[i]=='4'||num[i]=='7')
        ctr++;
 
    if(ctr==4||ctr==7)
      cout<<"YES";
    else  
      cout<<"NO";
    cout<<"\n";
    return 0;    
}