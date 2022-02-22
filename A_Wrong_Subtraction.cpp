#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int k;
    cin>>n>>k;

    while(k--)
    {
        if(n.back()!='0')
          n.back()='0'+(n.back()-'0'-1);
        else 
          n.pop_back();  
    }

    cout<<n;
}