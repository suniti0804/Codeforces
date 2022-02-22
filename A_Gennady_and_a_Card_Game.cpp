#include<bits/stdc++.h>
using namespace std;

int main()
{
    string card;
    cin>>card;

    int ctr=5;
    while(ctr--)
    {
        string str;
        cin>>str;
        if(str[0]==card[0]||str[1]==card[1])
           break;
    }
    if(ctr==-1)
      cout<<"NO";
    else
      cout<<"YES";  

    return 0;  
}