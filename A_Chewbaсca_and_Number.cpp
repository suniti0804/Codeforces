#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin>>num;

    int i=0;
    while(num[i]=='9')
       i++;

    for(; i<num.size(); i++)
    {
        if(num[i]>='5')
          num[i]='0'+(9-(num[i]-'0'));
    }

    cout<<num<<"\n";
    return 0;
}